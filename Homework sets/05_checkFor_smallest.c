// Homework set 02: c:
// Write a program to print the smallest number of two.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("%d is smallest", num1);
    }
    else
    {
        printf("%d is smallest", num2);
    }

    return 0;
}