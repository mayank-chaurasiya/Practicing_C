//Homework set 04: b:
//Write a program to check if a number is prime or not.

# include <stdio.h>
# include <math.h>

int main() {
    int num, isPrime=1, i;

    printf("Enter the number : ");
    scanf("%d", &num);

    //for special case--
    if(num <= 1) {
        isPrime = 0;
    } else {
        //divisibility check: loop up to the square root of num--
        for(i = 2; i <= sqrt(num); i++){
            if(num % i == 0) {
                isPrime = 0;
                break; //Exit the loop as soon as a divisor is found.
            }
        }
    }

    //Printing the result
    if(isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}