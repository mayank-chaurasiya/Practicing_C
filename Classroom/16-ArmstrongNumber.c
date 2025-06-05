//16. Program to check if the number is Armstrong(A number is equal to the sum of its own digits each raised to the power of the number of digits.) or not.

# include <stdio.h>
# include <math.h>

int main() {
    int num, originalNum, remainder, n=0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for(originalNum = num; originalNum != 0; n++){
        originalNum /= 10;
    }

    for(originalNum = num; originalNum != 0; originalNum /= 10){
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    if((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
    }
