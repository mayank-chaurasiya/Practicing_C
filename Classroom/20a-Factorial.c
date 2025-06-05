//Loop method

# include <stdio.h>

int factorial(int n){
    int result = 1;
    for(int i=n; i>0; i--){
        result = result*i;
    }
    return result;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d \n", num, factorial(num));
    return 0;
}