//66. write a program to calculate the sum of numbers occuring in the multiplication of n inputed by the user
# include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    for(int i = 1; i<= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
        sum += (n*i);
    }

    printf("\n");

    printf("Addition of the 10 multiples of %d is %d", n, sum);
    return 0;
}