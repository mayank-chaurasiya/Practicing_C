//Homework set 
//Write a program to print the average of 3 numbers

# include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter the numbers respectively :\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int avg = (num1+num2+num3)/3;
    printf("the average is : %d", avg);
    return 0;
}