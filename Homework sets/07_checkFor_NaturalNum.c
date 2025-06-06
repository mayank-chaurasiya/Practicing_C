// HomeWork set 03: b:
// Write a program to check if the given number is a natural number.(Natural number starts from 1.)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the digit: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 9)
    {
        printf("The %d is natural number.", n);
    }
    else
    {
        printf("not a natural number.");
    }

    return 0;
}