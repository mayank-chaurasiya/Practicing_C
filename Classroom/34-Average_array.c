// 34. Find the average of numbers using array..

# include <stdio.h>

int main() {
    int avg[15], n, sum = 0;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter your data %d : ", i+1);
        scanf("%d", &avg[i]);

        sum += avg[i];
    }

    double average = (double)sum/n;

    printf("Average of inputed data = %.2lf", average);

    return 0;
}