// 54. write a program to perfrom addition and subtraction using pointer to function

# include <stdio.h>

void add(int a, int b);
void diff(int a, int b);

void main()
{
    void (*A)(int, int) = &add;
    (*A)(10, 20);
    void (*D)(int, int) = &diff;
    (*D)(10, 20);
}

void add(int a, int b) 
{
    printf("Sum of %d and %d is : %d \n", a, b, a+b);
}

void diff(int a, int b) 
{
    printf("Difference of %d and %d is : %d \n", a, b, a-b);
}
