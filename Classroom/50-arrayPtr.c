//50. Write a program to pass array as pointer.

# include <stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    int (*ptr)[5];
    p = arr;
    ptr = &arr;

    printf("Address of array arr = %u\n", p);
    p++;

    printf("latest address value of p = %u\n", p);

    printf("Address of array arr = %u\n", ptr);
    ptr++;

    printf("latest address value of ptr = %u", ptr);

}