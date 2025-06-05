//Wrie a recursive function to print n terms of fibonacci sequence.

# include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}