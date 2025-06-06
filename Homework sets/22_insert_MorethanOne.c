//Write a program to insert more than one element in the existing array.

# include <stdio.h>

int main() {
    int volume;
    printf("Enter size of the array: ");
    scanf("%d", &volume);

    int array[volume];

    printf("Enter your data: ");
    for(int i=0; i<volume; i++) {
        scanf("%d", &array[i]);
    }

    printf("Your array is : ");
    for(int i=0; i<volume; i++) {
        printf("%d ", array[i]);
    }

    int size;
    printf("\nEnter the length of new element: ");
    scanf("%d", &size);

    int newElement[size];

    printf("Enter the element you wanna add on: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &newElement[i]);
    }

    int newData[volume+size];

    for(int i=0; i<volume; i++) {
        newData[i] = array[i];
    }

    for(int i=0; i<size; i++) {
        newData[volume + i] = newElement[i];
    }
    
    printf("The new array is : ");
    for(int i=0; i<volume+size; i++) {
        printf("%d ", newData[i]);
    }

    return 0;
}