// 37. Take input rows and columns and width from the user and store it in 3D array and display output.

# include <stdio.h>

int main() {
    int arr[10][10][10], n, m, o;

    printf("Enter the number of rows and columns respectively: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &o);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < o; k++) {
                arr[i][j][k] = i * j * k;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < o; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}