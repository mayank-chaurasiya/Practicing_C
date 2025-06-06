//Homework set 04: c:
//Write a program to print prime numbers in a range.

# include <stdio.h>

int main() {
    int firstTerm, lastTerm, i, j, isPrime;

    printf("Enter first term : ");
    scanf("%d", &firstTerm);

    printf("Enter last term : ");
    scanf("%d", &lastTerm);

    printf("Prime numbers between %d and %d are :\n", firstTerm, lastTerm);

    for(i = firstTerm; i <= lastTerm; i++) {
        isPrime = 1;

        //check for divisibility--
        if(i < 2) {
            isPrime = 0;
        } else {
            for(j = 2; j*j <= i; j++) {
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
        

        if(isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}