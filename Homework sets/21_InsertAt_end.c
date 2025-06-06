//Homework set 07: c:
//Write a program to insert an element at the end of an array.

# include <stdio.h>

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int data[n];

    printf("Enter your data: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Your array is : ");
    for(int i=0; i<n; i++) {
        printf("%d ", data[i]);
    }

    int newElement;
    printf("Enter the element you wanna add on: ");
    scanf("%d", &newElement);

    int newData[n+1];

    for(int i=0; i<n; i++) {
        newData[i] = data[i];
    }

    newData[n] = newElement;

    printf("The new array is : ");
    for(int i=0; i<n+1; i++) {
        printf("%d ", newData[i]);
    }

    return 0;
}