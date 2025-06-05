//11. Program to find the simple Interest.

# include <stdio.h>

int main() {
    float principle, rate, time, si;
    
    printf("Enter Principle: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    si = (principle*rate*time)/100;

    printf("Simple interest is: %f", si);
    return 0;
}