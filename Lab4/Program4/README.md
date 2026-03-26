# PSoC 4: Shift Register & 7-Segment Display (Lab 4)

## English Version
### Project Overview
This laboratory work focuses on serial-to-parallel data conversion using a shift register (like the 74HC595). The PSoC 4 reads inputs from a 4x3 matrix keypad and transmits the corresponding byte via bit-banging (`Data`, `Clock`, and `Latch` pins) to control a 7-segment display.

### Hardware Configuration
* **Keypad:** `R_1`-`R_4` (Inputs, Pull-up), `C_1`-`C_3` (Outputs).
* **Shift Register Pins:**
    * `Pin_DO` (Data Out): Sends data bit by bit.
    * `Pin_CLK` (Clock): Pulses to shift the bit into the register.
    * `Pin_Latch` (Latch): Pulses to push shifted data to output pins.

### Key Logic
* **Bit-banging SPI:** Implemented a custom `ShiftOut()` function to manually toggle GPIO states according to the shift register timing requirements.
* **Hex Mapping:** Translates keypad indices into 8-bit hex codes formatted for a 7-segment display.

---

## Українська версія
### Опис проекту
Ця лабораторна робота присвячена перетворенню послідовних даних у паралельні за допомогою зсувного регістра (типу 74HC595). PSoC 4 зчитує натискання з матричної клавіатури та передає відповідний байт через піни `Data`, `Clock` та `Latch` для керування 7-сегментним індикатором.

### Конфігурація обладнання
* **Клавіатура:** `R_1`-`R_4` (Входи, Pull-up), `C_1`-`C_3` (Виходи).
* **Піни зсувного регістра:**
    * `Pin_DO` (Data Out): Послідовна передача даних побітово.
    * `Pin_CLK` (Clock): Тактовий імпульс для запису біта в регістр.
    * `Pin_Latch` (Latch): Імпульс-защіпка для виводу даних на фізичні контакти.

### Логіка роботи
* **Програмний SPI:** Реалізовано кастомну функцію `ShiftOut()` для ручного керування станами портів (bit-banging) згідно з таймінгами регістра.
* **Мапа символів:** Індекси кнопок конвертуються у 8-бітні маски, розраховані для світіння сегментів індикатора.