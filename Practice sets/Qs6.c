//Practice Question 06::::

//Write a program to check if a number is odd or even.

# include <stdio.h>
int main() {
    //even -> 1;
    //odd -> 0;
    int x ;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}