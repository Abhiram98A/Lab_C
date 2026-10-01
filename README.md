# Lab_C - C Programming Lab Exercises

This repository contains C programming exercises completed during lab sessions. The exercises are organized into four tasks, each focusing on different fundamental concepts of C programming.

## Repository Structure

```
Lab_C/
├── Task1/  - Basic I/O, Format Specifiers & Arithmetic Operations
├── Task2/  - Conditional Statements (if-else)
├── Task3/  - Decision Making (if-else-if, nested if, switch-case)
├── Task4/  - Loops (while, for, do-while) & Problem Solving
```

---

## Task 1: Basic I/O, Format Specifiers & Arithmetic Operations

| File | Description | Key Concepts |
|------|-------------|--------------|
| `T1a.c` | **Format Specifiers Demo** | `%d`, `%hd`, `%ld`, `%f`, `%lf`, `%c`, ASCII values |
| `T1b.c` | **Simple & Compound Interest Calculator** | `scanf`, `printf`, `math.h` (`pow`), financial formulas |
| `T1c.c` | **Multiplication Table (First 3 Rows)** | User input, formatted output, basic arithmetic |
| `T1d.c` | **Temperature Converter (Celsius ↔ Fahrenheit)** | Formula implementation, floating-point precision |

### Sample Outputs
```bash
# T1a.c
The sum of 125 and 65 is 190
The sum of short 6 and long 256787 is 256793
The area of circle with radius 5.60 is 98.5200
The character is A and its ASCII value is 65

# T1b.c
Enter principal amount: 20000
Enter rate of interest: 4
Enter time in years: 3
Simple Interest: 2400.00
Total amount after simple interest: 22400.00
Compound Interest: 25971.20
Total amount after compound interest: 45971.20
```

---

## Task 2: Conditional Statements (if-else)

| File | Description | Key Concepts |
|------|-------------|--------------|
| `T2a.c` | **Even/Odd Number Check** | Modulo operator (`%`), basic if-else |
| `T2b.c` | **Max & Min of Three Numbers** | Sequential comparison, multiple if statements |
| `T2c.c` | **Positive/Negative/Zero Check** | if-else-if ladder, boundary conditions |
| `T2d.c` | **Divisibility Check** | Modulo operator, division-by-zero handling |

### Sample Outputs
```bash
# T2a.c
Enter a number: 13
13 is an odd number.

# T2b.c
Enter three numbers: 5 10 3
Maximum number: 10
Minimum number: 3

# T2d.c
Enter a number: 10
Enter a divisor: 3
10 is not divisible by 3.
```

---

## Task 3: Advanced Decision Making

| File | Description | Key Concepts |
|------|-------------|--------------|
| `T3a.c` | **CGPA Grade Calculator** | if-else-if ladder, range checking, input validation |
| `T3b.c` | **Largest of Three (Nested if-else)** | Nested conditional statements, float comparison |
| `T3c.c` | **Day of Week (Switch-Case)** | `switch` statement, `break`, `default` case |
| `T3d.c` | **Simple Calculator (Switch-Case)** | Switch on char operator, division/modulo by zero handling |

### Grade Mapping (T3a.c)
| CGPA Range | Grade |
|------------|-------|
| 9.0 – 10.0 | A |
| 8.0 – 8.99 | A+ |
| 7.0 – 7.99 | B+ |
| 6.0 – 6.99 | B |
| 5.0 – 5.99 | C |
| 4.0 – 4.99 | D |
| 0.0 – 3.99 | F |
| < 0 or > 10 | Invalid |

### Sample Outputs
```bash
# T3a.c
Enter the student's CGPA (between 0 and 10): 8.5
Grade: A+

# T3c.c
Enter a number (1-7) to get the corresponding day of the week: 3
Day 3: Wednesday

# T3d.c
Enter two integers: 10 2
Enter an operator (+, -, *, /, %): /
Result: 10 / 2 = 5
```

---

## Task 4: Loops & Problem Solving

| File | Description | Key Concepts |
|------|-------------|--------------|
| `T4a.c` | **Armstrong Number Check** | `while` loop, digit extraction, cubic sum |
| `T4b.c` | **Digit Sum & Palindrome Check** | `for` loop, digit reversal, palindrome logic |
| `T4c.c` | **Digit Frequency Counter** | Array as frequency map, `while` loop, negative handling |
| `T4d.c` | **GCD (Euclidean Algorithm)** | `while` loop, modulo arithmetic, absolute values |
| `T4e.c` | **Fibonacci Sequence Generator** | `for` loop, `long long`, iterative approach |
| `T4f.c` | **Prime Numbers up to N** | Nested `for` loops, divisor counting, optimization basics |
| `T4g.c` | **Menu-Driven Calculator** | `do-while` loop, continuous operation, user choice |

### Sample Outputs
```bash
# T4a.c
Enter a number: 153
153 is an Armstrong number.

# T4b.c
Enter a number: 121
The sum of the digits of 121 is 4
The Number 121 is a palindrome

# T4c.c
Enter an integer: 1220450
Digit    Frequency
0        2
1        1
2        2
4        1
5        1

# T4d.c
Enter two integers: 48 18
GCD of 48 and 18 = 6

# T4e.c
Enter the number of terms: 10
Fibonacci sequence: 0 1 1 2 3 5 8 13 21 34

# T4f.c
Enter the value of n: 20
Prime numbers between 1 and 20: 2 3 5 7 11 13 17 19

# T4g.c
Enter expression (operand1 operator operand2): 5 + 3
Result: 5.00 + 3.00 = 8.00
Do you want to continue? (y/n): n
Exiting calculator. Goodbye!
```

---

## How to Compile and Run

### Using GCC (Linux/macOS/WSL)
```bash
# Compile a specific program
gcc Task1/T1a.c -o T1a
# Run
./T1a

# For programs using math.h (T1b.c)
gcc Task1/T1b.c -o T1b -lm
./T1b
```

### Using GCC (Windows MinGW)
```bash
gcc Task1/T1a.c -o T1a.exe
T1a.exe
```

### Compile All at Once
```bash
# Linux/macOS
for f in Task*/*.c; do
    base=$(basename "$f" .c)
    dir=$(dirname "$f")
    if grep -q "math.h" "$f"; then
        gcc "$f" -o "$base" -lm
    else
        gcc "$f" -o "$base"
    fi
done

# Windows PowerShell
Get-ChildItem Task*/*.c | ForEach-Object {
    $base = $_.BaseName
    if (Select-String "math.h" $_) {
        gcc $_.FullName -o $base -lm
    } else {
        gcc $_.FullName -o $base
    }
}
```

---

## Learning Progression

| Task | Focus Area | Difficulty |
|------|------------|------------|
| 1 | Fundamentals: I/O, data types, operators | Beginner |
| 2 | Basic conditionals, relational/logical operators | Beginner |
| 3 | Complex decision making, switch-case | Beginner-Intermediate |
| 4 | Loops, algorithms, problem solving | Intermediate |

---

## Notes

- All programs include sample input/output as comments at the end of each file
- Programs handle basic error cases (division by zero, invalid input, etc.)
- Code follows standard C99 conventions
- Each task builds upon concepts from previous tasks

---

## License

Educational repository for academic lab exercises.