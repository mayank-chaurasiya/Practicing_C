//Homework set 05: d:
//Make your own pow function.

# include <stdio.h>

double powFunc(double base, int exponent);

int main() {
    double base;
    printf("Enter the base: ");
    scanf("%lf", &base);

    int exponent;
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = powFunc(base, exponent);
    
    printf("The result of %.2lf to the power of %d is %2lf\n", base, exponent, result);

    return 0;
}

double powFunc(double base, int exponent) {
    double result = 1.0;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}