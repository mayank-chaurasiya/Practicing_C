//51. write a program to add input using pointer function.

# include <stdio.h>

int add(int, int);

void main()
{
    int (*p) (int, int);
    int a, b, result;
    p = add;
    printf("Enter the value of a and b \n");
    scanf("%d %d", &a, &b);

    result = (*p)(a, b);
    printf("addition is : %d", result);
}

int add(int a, int b)
{
    return a + b;
}