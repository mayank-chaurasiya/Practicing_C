// 74. write a c program to take element and its position as input and store them in an array

#include <stdio.h>

int main()
{
    int arr[50];
    int i, x, pos, n = 10;

// initialize the array with some values
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

// print the original array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

// get the element to be inserted(e.g., 50) and its position (e.g., 5)
    x = 50;
    pos = 5;
    n++; //increase the array size

// shift elements to make space for the new element
    for (i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

// insert the element at the specified position
    arr[pos - 1] = x;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}