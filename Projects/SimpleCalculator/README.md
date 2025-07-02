# Simple Calculator in C

This project is a simple C program that performs addition, subtraction, multiplication, or division on two numbers provided by the user.

---

## 1. **Header Files**
```c
#include <stdio.h>
#include <float.h>
```
- `stdio.h`: For input/output functions (`printf`, `scanf`).
- `float.h`: For `DBL_MAX`, the largest possible double value (used for error handling).

---

## 2. **Variable Declarations**
```c
char op;
double a, b, result;
```
- `op`: Stores the operator entered by the user (`+`, `-`, `*`, `/`).
- `a`, `b`: The two operands (numbers) entered by the user.
- `result`: Stores the result of the calculation.

---

## 3. **User Input**
```c
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &op);

printf("Enter two operands: ");
scanf("%lf %lf", &a, &b);
```
- Prompts the user to enter an operator.
- Reads the operator into `op`.
- Prompts the user to enter two numbers.
- Reads the numbers into `a` and `b`.

---

## 4. **Switch Statement for Operation**
```c
switch (op)
{
case '+':
    result = a + b;
    break;
case '-':
    result = a - b;
    break;
case '*':
    result = a * b;
    break;
case '/':
    result = a / b;
    break;
default:
    printf("Error! Incorrect Operator Value\n");
    result = -DBL_MAX;
    break;
}
```
- Checks the value of `op`:
  - If `+`, adds `a` and `b`.
  - If `-`, subtracts `b` from `a`.
  - If `*`, multiplies `a` and `b`.
  - If `/`, divides `a` by `b`.
  - If none of these, prints an error and sets `result` to `-DBL_MAX` (an error flag).

---

## 5. **Result Output**
```c
if (result != -DBL_MAX)
{
    printf("%.2lf", result);
}
```
- If the result is not the error flag, prints the result rounded to two decimal places.

---

## **Example Dry Run**

Suppose the user enters:
- Operator: `*`
- Operands: `5` and `3`

**Step-by-step:**
1. Program prints: `Enter an operator (+, -, *, /):`
2. User enters: `*`
3. Program prints: `Enter two operands:`
4. User enters: `5 3`
5. Switch checks `op`:
   - `op == '*'` → `result = 5 * 3 = 15`
6. Since `result != -DBL_MAX`, prints: `15.00`

---

## **Summary**

- The code is a simple calculator that performs addition, subtraction, multiplication, or division on two numbers.
- The user enters an operator and two numbers.
- The program calculates and prints the result, or shows an error if the