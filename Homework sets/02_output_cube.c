// Homework set 01: b:
// Take a number(n) from user and output its cube(n*n*n).

#include <stdio.h>

int main()
{
    int n, cube;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    cube = n * n * n; // formula

    printf("The cube of %d is - %d", n, cube);

    return 0;
}