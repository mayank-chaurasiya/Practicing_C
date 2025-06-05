//31. Write a Program to find the sum of digits.

# include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    while(n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits of %d is %d\n", n, sum);
    
    return 0;
}