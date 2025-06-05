//12. Program to convert Fahrenheit to Celsius.

# include <stdio.h>

int main(){
    float fahrenheit, celsius;
    
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f fahrenheit is equal to %.2f celsius.", fahrenheit, celsius);

    return 0;
}