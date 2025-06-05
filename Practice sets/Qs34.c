//Practice Question 34::::
//Write a function to print n terms of the fiboancci sequencee.

# include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    fib(n);
    return 0;
}

int fib(int n) {
    int fib1 = 0, fib2 = 1, nextTerm = 0;

    for(int i= 1; i<=n; i++) {
        if(i == 1) {
            printf("%d ", fib1);
            continue;
        }
        if(i == 2) {
            printf("%d ", fib2);
            continue;
        }

        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;

        printf("%d ", nextTerm);
    }
}