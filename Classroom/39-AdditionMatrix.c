// 39. Program to take input the elements of matrix and find the sum of the matrix.

# include <stdio.h>

int main() {
    int i, j;
    int m1[2][2], m2[2][2], sum[2][2];

    printf("Enter the elements in Array1\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the elements in Array2\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Perform addition\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Sum of array1 and array2 is \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}