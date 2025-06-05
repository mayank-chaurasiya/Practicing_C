//Practice Question 22::::
//Print reverse of the table for a number n.

# include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
//table--
    for(int i=1; i<=10; i++) {
        printf("%d ", n*i);
    }

    printf("\nThe reverse of the given number are..\n");

//reverse--
    for(int i=10; i>=1; i--) {
        printf("%d ", n*i);
    }
    return 0;
}