# STM32F303 Keypad Interfacing

**A register-level 4×4 matrix keypad scanner written in Embedded C.**

`Embedded C` · `STM32F303` · `Memory-mapped I/O` · `GPIO` · `OpenOCD`

This independent firmware exercise configures GPIOA directly through volatile memory-mapped register structures and prints detected key presses to the debugger console, without relying on HAL GPIO calls in the application logic.

## Wiring

Target: STM32F303 Discovery board with a passive 4×4 matrix keypad. Check your keypad's physical pin order against its datasheet.

| Keypad lines | STM32 GPIO | Configuration |
| --- | --- | --- |
| Rows 1–4 | PA0–PA3 | Outputs, scanned active-low |
| Columns 1–4 | PA4–PA7 | Inputs with internal pull-ups |

```text
        C1  C2  C3  C4
 R1      1   2   3   A
 R2      4   5   6   B
 R3      7   8   9   C
 R4      *   0   #   D
```

## Operation

1. Enable the GPIOA peripheral clock through RCC.
2. Configure row output modes and column input/pull-up modes.
3. Drive one row low at a time and inspect the column input register.
4. Translate a detected row/column intersection to its key.
5. Print the key through the debugger console with a simple busy-wait delay.

## Build and run

- Import the existing STM32CubeIDE project and build for the STM32F303 target.
- Connect the board and keypad; launch a debug session with the supplied OpenOCD configuration. Semihosting must be available for console output.
- Test individual key presses in the debug console.

The scanner and register setup live in [Src/main.c](Src/main.c). This is a single-key polling demonstration; verify electrical behavior before experimenting with simultaneous key presses.

Independent project by [Ali Ghelichkhani](https://github.com/I-Do-CS).
