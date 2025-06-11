// A simple calculator is a program that can perform addition, subtraction, multiplication, and division of two numbers provided as input.
#include <stdio.h>
#include <float.h>

int main()
{
    char op;
    double a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

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
    if (result != -DBL_MAX)
    {
        printf("%.2lf", result);
    }

    return 0;
}