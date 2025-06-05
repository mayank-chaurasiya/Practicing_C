# include <stdio.h>

int main() {
    int A, B, sum;
    printf("Enter A : ");
    scanf("%d", &A);
    printf("Enter B : ");
    scanf("%d", &B);
    sum = A + B;
    printf("The sum of %d and %d is : %d", A, B, sum);

    return 0;
}