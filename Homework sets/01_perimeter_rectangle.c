// Homework set 01: a:
// Write a program to calculate perimeter of rectangle. Take sides a & b, from the user.

#include <stdio.h>

int main()
{
    int a, b, perimeter;

    printf("Enter length(a): ");
    scanf("%d", &a);
    printf("Enter width(b): ");
    scanf("%d", &b);

    perimeter = 2 * (a + b); // formulae

    printf("The Perimeter of rectangle is: %d", perimeter);

    return 0;
}