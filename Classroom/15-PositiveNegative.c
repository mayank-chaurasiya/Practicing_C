//15. Program to check if Number is positive, Negative or Zero.

# include <stdio.h>

int main() {
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("%d is positive", num);
    else if(num < 0)
        printf("%d is negative", num);
    else
        printf("%d is zero.", num);

    return 0;
}