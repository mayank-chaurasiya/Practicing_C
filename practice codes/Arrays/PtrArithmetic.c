//Pointer Arithmetic::

# include <stdio.h>

int main() {

    //case 1

    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);

    //case 2
    
    float price = 100.00;
    float *ptr = &price;

    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);

    return 0;
}