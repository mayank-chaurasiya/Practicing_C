//26b. write a c program to print INVERTED-STAR pattern.
#include <stdio.h>

int main()
{
    int line;
    printf("Enter the number of lines : ");
    scanf("%d", &line);

    for (int i = 1; i <= line; i++)
    {
        for(int j = 1; j <= ((line - i) + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}