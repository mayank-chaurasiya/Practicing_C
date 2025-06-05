//swapping without using third variable

# include <stdio.h>

int main(){
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Values before swapping are %d and %d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Values after swapping are %d and %d", a, b);

    return 0;
}