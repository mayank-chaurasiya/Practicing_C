#include <stdio.h>

int main()
{
    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}