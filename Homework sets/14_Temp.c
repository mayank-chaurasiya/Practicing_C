//Homework set 05: c:
//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

# include <stdio.h>

void hotAndcold(int temperature);

int main() {
    int temperature;
    printf("Enter the temperature(in degrees) : ");
    scanf("%d", &temperature);

    hotAndcold(temperature);
    return 0;
    
}

void hotAndcold(int temperature) {
    if(temperature <= 5) {
        printf("It's servere cold outsie.");
    } else if (temperature > 5 && temperature <= 18) {
        printf("It's cold outside.");
    } else if (temperature > 18 && temperature <= 22) {
        printf("The weather is chill!!");
    } else if(temperature > 22 && temperature <= 26) {
        printf("Weather is moderate.");
    } else if(temperature > 26 && temperature <= 35) {
        printf("The temperature is at it's peak don't go outside.");
    } else {
        printf("It's extremely hot.. drink lot's of water and stay indoors!!");
    }

}