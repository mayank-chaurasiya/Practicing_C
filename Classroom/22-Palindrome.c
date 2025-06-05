//22. Write a program to check if he number is Palindrome or Not.

# include <stdio.h>

int main(){
    int n, reversedNum = 0, remainder, originalNum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNum = n;

    while(n != 0){
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    if(originalNum == reversedNum)
        printf("%d is a palindrome.", originalNum);
    else
        printf("%d is not a palindrome.", originalNum);

    return 0;
}