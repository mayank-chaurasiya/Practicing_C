//6. program to find the multiplication of 2 numbers.

# include <stdio.h>

int main() {
    int num1, num2, product;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    product = num1 * num2;

    printf("The product of %d and %d is : %d", num1, num2, product);

    return 0;
}