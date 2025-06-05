#include <stdio.h>

int main()
{
    int n; 
    printf("Enter the number of lines : ");
    scanf("%d", &n);

    int row = 1, stars = n, spaces = n - 2;
    
    for (row = 1; row <= n - 1; row++)
    {
        if (row == 1 || row == n - 1)
        {
            for (int i = 0; i <= stars; i++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");

            for (int i = 0; i <= spaces; i++)
            {
                printf("  ");
            }

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}