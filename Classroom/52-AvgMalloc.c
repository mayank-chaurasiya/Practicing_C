//52. Write a program to calculate the average of inputs using malloc.

# include <stdio.h>
# include <stdlib.h>

void main()
{
    int i, n, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    int *p = malloc(n *sizeof(int));

    if(p == NULL)
    {
        printf("Memory not allocated!!");
        exit(0);
    }
    else
    {
        printf("Memory allocated!!\n");

        for(i = 0; i < n; i++)
        {
            scanf("%d", p+i);
        }
    }

    printf("Dislplay elements \n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(p+i));
    }

    for(i = 0; i < n; i++)
    {
        sum += *(p+i);
    }

    printf("Average of elements inputed is %d ", sum/n);
}