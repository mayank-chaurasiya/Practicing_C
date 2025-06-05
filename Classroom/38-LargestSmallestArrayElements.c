// 38. Program to take array elements from the user and display output of largest, 2nd largest and smallest elements of the array.

# include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second_largest = arr[0], smallest = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest) {
            second_largest = arr[i];
        } else if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}