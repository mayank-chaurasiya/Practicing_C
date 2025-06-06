//Homework set 06: a:
//Write a program in C to find the maximum number between two numbers using a pointer.

# include <stdio.h>

void maxNum(int *num1, int *num2);

int main() {
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    maxNum(&num1, &num2);
    return 0;
}

void maxNum(int *num1, int *num2) {
    if(*num1 > *num2) {
        printf("The maximum one is: %d", *num1);
    } else {
        printf("The maximum one is: %d", *num2);
    }
}