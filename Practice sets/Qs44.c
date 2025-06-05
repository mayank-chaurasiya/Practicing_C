//Practice Question 44::::
//Write a function to reverse an array.

# include <stdio.h>

int reversedArray(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int n;
    printf("Enter the size of your Number(count) : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your numbers : \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    reversedArray(arr, n);
    
    printf("The revers of inputed Numbers are : ");
    printArr(arr, n);

    return 0;
}

int reversedArray(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}