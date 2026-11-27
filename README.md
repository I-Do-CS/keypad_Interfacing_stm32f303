# STM32F303 Matrix Keypad

A register-level scanner for a passive 4×4 keypad. The STM32F303 drives one row low at a time, reads the columns and prints the corresponding character to the debugger console.

## Connect the keypad

Match the keypad’s row and column labels to the table. Connector order varies by keypad.

| Keypad lines | STM32 pins | GPIO mode |
| --- | --- | --- |
| R1, R2, R3, R4 | `PA0`, `PA1`, `PA2`, `PA3` | Active-low outputs |
| C1, C2, C3, C4 | `PA4`, `PA5`, `PA6`, `PA7` | Inputs with internal pull-ups |

| | C1 | C2 | C3 | C4 |
| --- | :-: | :-: | :-: | :-: |
| **R1** | 1 | 2 | 3 | A |
| **R2** | 4 | 5 | 6 | B |
| **R3** | 7 | 8 | 9 | C |
| **R4** | \* | 0 | # | D |

## Run it

With the keypad connected to the STM32F303 Discovery board:

1. Import the existing project into STM32CubeIDE and build the Debug configuration.
2. Launch the supplied OpenOCD debug configuration with semihosting enabled.
3. Press a key. Its character appears in the debugger console.

[main.c](Src/main.c) contains the scan loop and key mapping. [f303regs.h](Inc/f303regs.h) defines the memory-mapped register structures used to configure GPIOA directly.
