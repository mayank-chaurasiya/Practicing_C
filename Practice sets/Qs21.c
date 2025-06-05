//Practice Question 21::::
//Print the factorial of a number n.

# include <stdio.h>

int main() {
    int factorial = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        factorial = factorial*i;
    }
    printf("factorial of %d is %d", n, factorial);
}