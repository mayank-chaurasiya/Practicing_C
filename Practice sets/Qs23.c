//Practice Question 23::::
//Calculate the sum of all numbers between 5 and 50.(including 5 & 50)

# include <stdio.h>

int main() {
    int sum = 0;
    for(int i=5; i<=50; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum is : %d", sum);

    return 0;
}