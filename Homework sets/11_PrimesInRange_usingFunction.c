//Write a program to print prime numbers in a range using functions.

# include <stdio.h>

//function to check if a number is prime--
int isPrime(int num) {
    if(num < 2) {
        return 0; //Not a prime number.
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return 0; // Not a Prime number.
        }
    }
    return 1; //Prime number
}

//function to print prime numbers in a given range--
void primesInRange(int start, int end) {
    printf("Prime numbers in the range [%d, %d]: \n", start, end);
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;

    //Input range from the user.
    printf("Enter the starting point of the range: ");
    scanf("%d", &start);
    printf("Enter the ending point of the range: ");
    scanf("%d", &end);

    //Print prime numbers in the given range--
    primesInRange(start, end);

    return 0;
}