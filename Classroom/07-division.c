//6. program to find the division of 2 numbers.

# include <stdio.h>

int main() {
    int num1, num2, q, r;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    q = num1 / num2;
    r = num1 % num2;
    
    printf("The Quotient is: %d\n", q);
    printf("The Remainder is: %d\n", r);

    return 0;
}