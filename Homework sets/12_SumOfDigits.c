//Homework set 05: a:
//Write a function to find sum of digits of a number..

# include <stdio.h>

int sumOfDigits(int n);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));

    return 0;
}    

int sumOfDigits(int n) {
    int sum = 0; // initialize sum to 0
    
    while(n != 0) {// loop until n becomes o
        sum = sum + n % 10; // add the last digit of n to sum
        n = n / 10; // remove the last digit of n
    }
    return sum; //return the final sum
}
