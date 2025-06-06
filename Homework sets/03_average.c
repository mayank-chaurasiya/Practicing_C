// Homework set 02: a:
// Write a program to print the average of 3 numbers.

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float average;

    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter num3: ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3; // formula

    printf("The average of %d %d and %d is: %.3f", num1, num2, num3, average);

    return 0;
}