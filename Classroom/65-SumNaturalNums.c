//65. Write a program to sum natural numbers.
# include <stdio.h>

int main(){
    int n, m, sum = 0;
    printf("Enter the starting number: \n");
    scanf("%d", &n);
    printf("Enter the ending number: \n");
    scanf("%d", &m);

    printf("Natural numbers between %d and %d are\n", n, m);
    for(int i = n; i <= m; i++){
        printf("%d\t", i);
        sum += i;
    }
    printf("\n");
    printf("The sum of Natural numbers between %d and %d is %d", n, m, sum);
    return 0;
}