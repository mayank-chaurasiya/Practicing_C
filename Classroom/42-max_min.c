// 42. Program to print maximum and minimum element of array

# include <stdio.h>

int main() {
    int n, i;
    int max, min;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("maximum : %d\n", max);
    printf("minimum : %d\n", min);

    return 0;
}