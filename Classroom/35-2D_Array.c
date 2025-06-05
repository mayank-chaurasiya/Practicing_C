// 35. Take input rows and columns from the user and store it in 2D array and display output.

# include <stdio.h>

int main() {
    int grade[3][4], n, m;

    printf("Enter the number of rows and columns respectively: \n");
    scanf("%d", &n);
    scanf("%d", &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            grade[i][j] = i * j;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", grade[i][j]);
        }
        printf("\n");
    }

    return 0;
}