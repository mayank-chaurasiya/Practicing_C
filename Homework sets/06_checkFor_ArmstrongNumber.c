// Homework set 03: a:
// Write a program to check it a given number is Armstrong number or not.(Search what is Armstrong number)

#include <stdio.h>

int main()
{
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // find the number of digits
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}