//8. Program to find the average.

# include <stdio.h>

int main(){
    int i, num, n;
    float sum = 0.0, average;
    printf("Enter total Numbers: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    for(i=0; i<n; i++){
        scanf("%d", &num);
        sum += num;
    }

    average = sum/n;
    printf("Average of the entered number is %.2f\n", average);

    return 0;
}