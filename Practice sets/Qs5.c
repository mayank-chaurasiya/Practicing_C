//Practice Question 05::::
//Write a program to check if a number is divisible by 2 or not.

# include <stdio.h>
int main() {
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}