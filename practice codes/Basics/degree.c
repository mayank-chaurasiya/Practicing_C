# include <stdio.h>
int main(){
    float f,c;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("Temperature in Celcius is : %f", c);
    return 0;
}