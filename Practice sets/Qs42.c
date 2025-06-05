//Practice Question 42::::
//Write a function to count the number of odd numbers in an array.

# include <stdio.h>

int countOdd(int arr[], int n);
int countEven(int arr[], int n);

int main() {
    int n;
    printf("Enter total number : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your numbers you wanna check total number of ODD and EVEN : \n");
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Total Odd Numbers : %d \n", countOdd(arr, n));

    printf("Total Even Numbers : %d \n", countEven(arr, n));

    return 0;
}

int countOdd(int arr[], int n) {
    int odd = 0;
    printf("The ODD's are : ");
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            odd++;
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return odd;
}

int countEven(int arr[], int n) {
    int even = 0;
    printf("\nThe EVEN's are : ");
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return even;
}