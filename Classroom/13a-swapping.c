//swapping using third variable.

# include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Values before swapping are %d and %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("Values after swapping are %d and %d", a, b);

    return 0;
}