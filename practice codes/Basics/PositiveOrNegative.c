# include <stdio.h>

int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("%d is positive ", number);
        if(number % 2 == 0)
        {
            printf(" Even");
        } else {
            printf(" Odd");
        }
    } else if(number < 0)
    {
        printf("%d is negative", number);
    } else
    {
        printf("%d is equal to zero", number);
    }

    return 0;
} 