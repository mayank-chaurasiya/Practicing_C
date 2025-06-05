//Practice Question 40::::
//Write a function to calculate the sum, product & average of 2 numbers. Print that aveerage in the main function.

# include <stdio.h>

void calcuLate(int a, int b, int *sum, int *prod, int *avg);

int main() { 
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    int sum , prod, avg;
    calcuLate(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;
}

void calcuLate(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a*b;
    *avg = (a+b)/2;
}