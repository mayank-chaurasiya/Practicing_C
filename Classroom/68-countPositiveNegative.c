// 68. write a c program containing function which counts the number of positive integers in an array.

# include <stdio.h>

int countPositive(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        {
        count++;
        }
    }
    return count;
}

int countNegative(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 3, -5, -3, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The number of positive integers in an array is %d\n\n", countPositive(arr, size));
    printf("The number of negative integers in an array is %d\n", countNegative(arr, size));
    return 0;
}