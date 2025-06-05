//Practice Question 14::::
//Print the numbers from 0 to n, if n is given by user.

# include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    // int i=0;
    // while (i<=n)            
    // {
    //     printf("%d ", i);
    //     i++;
    // }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    
    return 0;
}