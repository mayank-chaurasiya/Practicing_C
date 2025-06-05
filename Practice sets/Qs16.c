//Practice Question 16::::
//Print the table of a number input by the user.

# include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        printf("%d ",n*i);
    }
    return 0;
}