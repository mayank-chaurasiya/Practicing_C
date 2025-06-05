# include <stdio.h>

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int l = 0, r = n - 1, mid, result = -1;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
        {
            result = mid;
            break;
        }

        // If x is greater, ignore left half
        if (arr[mid] < x)
            l = mid + 1;

        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }

    // Print the result
    (result == -1) ? printf("Element is not present in array\n") : printf("Element is present at index %d\n", result);

    return 0;
}
