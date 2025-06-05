// Write a program taht reads a set of integers, and then prints the sum of the even and odd integers.

#include <stdio.h>

int main()
{
    int total, n, even_sum = 0, odd_sum = 0;
    printf("Enter the total number of integers you are going to input : ");
    scanf("%d", &total);

    printf("\nYour integers are : \n");
    for (int i = 1; i <= total; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even_sum += n;
        }
        else
        {
            odd_sum += n;
        }
    }
    printf("Sum of all the even numbers inputed is %d\nSum of all the odd numbers inputed is %d", even_sum, odd_sum);
    return 0;
}