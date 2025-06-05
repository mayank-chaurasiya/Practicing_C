//18. Program to print the largest of 3 numbers.

# include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3) {
        printf("%d is largest", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("%d is largest", num2);
    } else  {
        printf("%d is largest", num3);
    }
    return 0;
}