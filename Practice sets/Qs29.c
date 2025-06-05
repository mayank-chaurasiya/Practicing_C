//Practice Question 29::::
//Use library functions to calculate the square of a number given by user.

# include <stdio.h>
#include<math.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    
    printf("The square of %d is : %f", num, pow(num, 2));

    return 0;
}