//17. Program to find maximum of 2 numbers.

# include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("%d is greater than %d", num1, num2);
    } else if(num1 < num2) {
        printf("%d is greater than %d", num2, num1);
    } else {
        printf("%d is equal to %d", num1, num2);
    }

    return 0;
}