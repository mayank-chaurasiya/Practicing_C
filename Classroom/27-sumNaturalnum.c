//27. Calculate the sum of natural number. 

# include <stdio.h>

int main() {
    int n, sum=0;
    printf("Enter your number: ");
    scanf("%d", &n);
//sum of natural numbers--
    for(int i=1; i<=n; i++){
        sum += i;
    }
        printf("the sum of first %d natural numbers is : %d\n",n,sum);

    return 0;

}