// 75. write a program to delete an element from the array and print the updated array.

#include <stdio.h>

int main()
{
    int arr[50], i, x, pos, n;

    printf("Enter the size of array : \n");
    scanf("%d", &n);

    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("Enter the position of element to be deleted : ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: \n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}