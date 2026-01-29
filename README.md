# CSCI3240 Lab 2: Bitwise Operators and Loops

This repository contains solutions for Lab 2 assignments focusing on bitwise operations and combinatorics.

## Lab Overview

### Problem 1: Bitwise Operations (`lab2Problem1.c`)
A program that performs various bitwise operations on user-provided integers.

**Features:**
- Doubles a number using left shift operator (`<<`)
- Computes one-fourth using right shift operator (`>>`)
- Determines even/odd using bitwise AND (`&`)
- Calculates two's complement using bitwise NOT (`~`)
- Continuous input loop until user types "quit"

**Usage:**
```bash
gcc lab2Problem1.c -o lab2Problem1
./lab2Problem1
```

**Sample Run:**
```
Enter a positive integer or type "quit" to exit: 10
Results for n = 10
Double of 10: 20
One Fourth of 10: 2
10 is even
Two's Complement of 10:
Hex Format:0xFFFFFFF6
Integer Format:-10
```

---

### Problem 2: Permutation and Combination (`lab2Problem2.c`)
A program that calculates permutation P(n,r) and combination C(n,r) using factorials.

**Formulas:**
- P(n,r) = n! / (n-r)!
- C(n,r) = P(n,r) / r!

**Features:**
- Command-line argument input
- Input validation (1 ≤ n,r ≤ 20)
- Error handling for invalid inputs
- Uses `long long` to handle large factorial values

**Usage:**
```bash
gcc lab2Problem2.c -o lab2Problem2
./lab2Problem2 <n> <r>
```

**Example:**
```bash
./lab2Problem2 5 3
```

**Output:**
```
P(5,3) = 60
C(5,3) = 10
```

---

## Requirements
- C compiler (gcc)
- Standard C libraries: `stdio.h`, `stdlib.h`, `stdint.h`, `string.h`

## Compilation
```bash
# Problem 1
gcc lab2Problem1.c -o lab2Problem1

# Problem 2
gcc lab2Problem2.c -o lab2Problem2
```

## Testing
Test with boundary cases:
- n = 1, r = 1
- n = 20, r = 20
- n = 20, r = 1
- n = 1, r = 2 (should error)

## Author
Lab assignment for CSCI3240 - Data Structures and Algorithms
