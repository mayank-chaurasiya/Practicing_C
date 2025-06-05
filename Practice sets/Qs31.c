//Practice Question 31::::
//Factorial of n.

# include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter your terms(n) : ");
    scanf("%d", &n);

    printf("The factorial of %d is : %d", n, factorial(n));

    return 0;    
}

//recursive function
int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int factNm1 = factorial(n-1);
    int factN = factNm1 * n;
    
    return factN;
}