# Simple Arithmetic Calculator (C)

Just a simple CLI calculator I built for a Programming Fundamentals (PF) lab task. I wanted to upload this to document my progress with C.

It was a bit of a challenge getting all the logic right at first, especially handling the edge cases, but it works smoothly now.

### What it does
It takes an operator and two numbers to perform:
* **Basic Math:** `+`, `-`, `*`, `/`
* **Power:** `^` (Base to the power of exponent)
* **Square Root:** `s` (Checks for negative numbers so it doesn't crash)
* **Remainder:** `r` (Modulus operator)

### Features
* **Error Handling:** I added checks to make sure you can't divide by zero or try to square root a negative number.
* **Precision:** Uses `(float)` casting for division so you get decimal results instead of just integers.

### How to Run
If you have a C compiler installed (like GCC), you can run it like this:

```bash
# Compile (don't forget -lm to link the math library for pow/sqrt)
gcc Simple-Arithematic-Calculator.c -o calculator -lm

# Run
./calculator
