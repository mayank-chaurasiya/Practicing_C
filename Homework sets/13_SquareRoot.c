//Homework set 05: b:
//Write a function to find square root of a number.

# include <stdio.h>
# include <math.h>

double squareRoot(double num);

double main() {
    double num;
    printf("Enter a number : ");
    scanf("%lf", &num);

    printf("Square root of %lf is %lf\n", num, squareRoot(num));

    return 0;
}

double squareRoot(double num) {
    return sqrt(num);
}