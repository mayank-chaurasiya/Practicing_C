//Practice Question 41::::
//Write a program to enter price of 3 items & print their final cost with gst.

# include <stdio.h>

int main() {
    float price[3];

    printf("Enter the price of items:\n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    float gst = (price[0] + price[1] + price[2]) * 0.18;
    float final_price = (price[0] + price[1] + price[2] + gst);  

    printf("Your final price is(incl. taxes) : Rs. %.2f/- only", final_price);

    return 0;
}