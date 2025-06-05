//5. program for subtraction of 2 numbers

# include <stdio.h>

int main() {
    int num1, num2, diff;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    diff = num1 - num2;

    printf("The subtraction of %d and %d is : %d", num1, num2, diff);

    return 0;
}