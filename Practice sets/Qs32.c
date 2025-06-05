//Practice Question 32::::
//Write a function to convert celsius to fahrenheit.

# include <stdio.h>

float clsToFht(float celsius);

int main() {
    float celsius;
    printf("Enter the celsius: ");
    scanf("%f", &celsius);

    printf("The temperature in fahrenheit is : %f", clsToFht(celsius));

    return 0;
}

float clsToFht(float celsius) {
    return celsius*(9.0/5.0) + 32;
}