//Homework set 07: b:
//Write a program to print the largest number in an array.

# include <stdio.h>

int main() {
    int size;
    printf("Enter the length of Your data: ");
    scanf("%d", &size);

    int largest[size];
    printf("Enter your numbers: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &largest[i]);
    }

    printf("Your Entered arrays are : ");
    for(int i=0; i<size; i++) {
        printf("%d ", largest[i]);
    }

    int max = largest[0];
    int min = largest[0];

    for(int i=1; i<size; i++) {
        if(largest[i] > max) {
            max = largest[i];
        } else {
            min = largest[i];
        }
    }

    printf("\nThe largest number in the array is : %d", max);
    printf("\nThe smallest number in the array is : %d", min);

    return 0;
}