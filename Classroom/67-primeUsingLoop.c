// 67. write a program to check the number is prime or not using loops.
#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter your number: \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}