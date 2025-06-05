//29. Write a program to calculate power of a number.

# include <stdio.h>
# include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter an exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, result);

    return 0;
}