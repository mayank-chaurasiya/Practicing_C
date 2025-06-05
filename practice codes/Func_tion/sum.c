# include <stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("sum is %d: ", sum(a, b));

    return 0;
}

int sum(int a, int b) {
    return a + b;
}