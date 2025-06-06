//Homework set 06: b:
//Write a program in C to print the elements of an array in reverse order.

# include <stdio.h>


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Elements of array in reverse order are:\n");
    for(int i = n-1; i>=0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}