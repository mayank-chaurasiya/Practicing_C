//53. Write a program to print a table using malloc.

# include <stdio.h>
# include <stdlib.h>

void main()
{
    int *table = malloc(10 * sizeof(int));

    int n, i;

    printf("Enter the number(n)\n");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        table[i] = n * i;
    }

    for(i = 1; i <= 10; i++)
    {
        printf("%d\t", table[i]);
    }

    free(table);
}