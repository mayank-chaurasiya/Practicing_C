# include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d", &a, &b);
    printf("Number before swapping are %d and %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("Number after swapping are %d and %d", a, b);
    return 0;
}