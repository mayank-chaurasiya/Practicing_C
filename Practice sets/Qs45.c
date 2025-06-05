//Practice Question 45::::
//Write a program to store the first n fibonacci numbers.

# include <stdio.h>

int main() {
    int n;
    printf("Enter n **(n>1): ");
    scanf("%d", &n);

    int fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("%d %d ", fibonacci[0], fibonacci[1]);

    for(int i=2; i<n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]; //important
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}