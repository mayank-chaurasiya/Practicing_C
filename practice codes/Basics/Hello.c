# include <stdio.h>

int main() {
    int i, fact = 1, number;
    printf("Enter a number : ");
    scanf("%d", &number);

    for(i=number; i>=1; i--) {
        fact=fact*i;
    }

    printf("factorial of %d is: %d", number, fact);

    return 0;
} 