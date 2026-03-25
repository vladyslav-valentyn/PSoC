\# PSoC 4: Matrix Keypad \& Password Lock (Lab 3)



\## English Version

\### Project Overview

This project implements a 4x3 matrix keypad scanner on the PSoC 4 platform. It features an RGB LED state manager using a `switch(case)` structure to mix colors based on the pressed key, and a basic digital lock mechanism that validates a 4-digit password, logging the results via UART.



\### Hardware Configuration

\* \*\*Keypad Rows (Inputs):\*\* `R\_1` to `R\_4` (Configured as Resistive pull-up).

\* \*\*Keypad Columns (Outputs):\*\* `C\_1` to `C\_3` (Configured as Strong drive).

\* \*\*RGB LED:\*\* `LED\_R`, `LED\_G`, `LED\_B` (Active-Low).

\* \*\*UART:\*\* 115200 baud rate for terminal logging.



\### Key Features

1\.  \*\*Color Mixing:\*\* Maps specific keypad numbers to RGB color combinations (e.g., Yellow, Purple, Cyan).

2\.  \*\*Debouncing \& Edge Detection:\*\* Prevents multiple triggers from a single long press.

3\.  \*\*Password Verification:\*\* Buffers keystrokes and compares them against a predefined PIN (`1234`), printing access status to the UART terminal.



\---



\## Українська версія

\### Опис проекту

Проект реалізує сканер матричної клавіатури 4x3. Включає керування RGB-світлодіодом за допомогою конструкції `switch(case)` для змішування кольорів залежно від натиснутої кнопки, а також механізм цифрового замка, який перевіряє 4-значний пароль і виводить результати через UART.



\### Конфігурація обладнання

\* \*\*Рядки клавіатури (Входи):\*\* `R\_1` – `R\_4` (Режим Resistive pull-up).

\* \*\*Стовпці клавіатури (Виходи):\*\* `C\_1` – `C\_3` (Режим Strong drive).

\* \*\*RGB LED:\*\* `LED\_R`, `LED\_G`, `LED\_B` (Інвертована логіка).

\* \*\*UART:\*\* Швидкість 115200 бод для логування в термінал.



\### Основний функціонал

1\.  \*\*Міксування кольорів:\*\* Прив'язка кнопок до комбінацій RGB (Жовтий, Фіолетовий, Блакитний).

2\.  \*\*Антидребізг:\*\* Захист від багаторазових спрацьовувань при одному натисканні.

3\.  \*\*Перевірка пароля:\*\* Збір натискань у буфер та порівняння з еталонним PIN-кодом (`1234`), виведення статусу доступу в UART.

