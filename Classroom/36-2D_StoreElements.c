// 36. Take input the number of rows and columns from the user and also take the input of elements and store it it in 2D array..

# include <stdio.h>

int main() {
    int matrix[10][10], n, m;

    printf("Enter the number of rows and columns respectively: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Enter the value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}