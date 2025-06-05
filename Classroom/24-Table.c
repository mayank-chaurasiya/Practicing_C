//24. write a program to print the table of entered number

# include <stdio.h>

int main(){
    int num, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }
    
    return 0;
}