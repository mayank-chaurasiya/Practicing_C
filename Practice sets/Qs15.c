//Practice Question 15::::
//Print the sum of first n natural numbers also, print them in reverse.

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
//reverse--
    for(int i=n; i>=1; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}