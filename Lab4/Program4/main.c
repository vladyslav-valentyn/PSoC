#include "project.h"
static const uint8_t segMap[] = {
    0xC0, 0xF9, 0xA4, 0xB0,
    0x99, 0x92, 0x82, 0xF8,
    0x80, 0x90, 0x88, 0x83
};

static void shiftOut(uint8_t val) {
    for (int8_t bit = 0; bit < 8; bit++) {
        Pin_DO_Write((val & (0x80 >> bit)) ? 1 : 0);

        Pin_CLK_Write(1);
        Pin_CLK_Write(0);
    }
}

static void displayDigit(uint8_t index, uint8_t value, uint8_t dp) {
    uint8_t posMask = ~(1 << index);

    shiftOut(0xFF & posMask);

    uint8_t pattern = segMap[value];
    if (dp) pattern &= 0x7F;

    shiftOut(pattern);

    Pin_Latch_Write(1);
    Pin_Latch_Write(0);
}

static void (*colMode[3])(uint8_t) = {
    C_1_SetDriveMode, C_2_SetDriveMode, C_3_SetDriveMode
};

static void (*colWrite[3])(uint8_t) = {
    C_1_Write, C_2_Write, C_3_Write
};

static uint8 (*rowRead[4])(void) = {
    R_1_Read, R_2_Read, R_3_Read, R_4_Read
};

static uint8_t keyState[4][3];

static const uint8_t keyMap[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 0, 11}
};

static void initMatrix(void) {
    for (uint8_t i = 0; i < 3; i++) {
        colMode[i](C_1_DM_DIG_HIZ);
    }
}

static void scanMatrix(void) {
    for (uint8_t c = 0; c < 3; c++) {
        colMode[c](C_1_DM_STRONG);
        colWrite;

        for (uint8_t r = 0; r < 4; r++) {
            keyState[r][c] = rowRead[r]();
        }

        colMode[c](C_1_DM_DIG_HIZ);
    }
}

int main(void) {
    CyGlobalIntEnable;

    SW_Tx_UART_Start();
    SW_Tx_UART_PutString("Lab 4 Started\r\n");

    initMatrix();

    displayDigit(0, 0, 0);

    while (1) {
        scanMatrix();

        for (uint8_t r = 0; r < 4; r++) {
            for (uint8_t c = 0; c < 3; c++) {

                if (keyState[r][c] == 0) {
                    uint8_t key = keyMap[r][c];

                    if (key < 12) {
                        displayDigit(0, key, 0);
                        SW_Tx_UART_PutString("Key Pressed\r\n");
                    }
                }

            }
        }

        CyDelay(50);
    }
}