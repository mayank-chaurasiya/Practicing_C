# include <stdio.h>

# define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int row, col, sum = 0;

    printf("Enter elements of the matrix: \n");
    for(row = 0; row < SIZE; row++) {
        for(col = 0; col < SIZE; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    for(row = 0; row < SIZE; row++) {
        sum += matrix[row][row];
    }

    printf("Sum of the diagonal elements: %d\n", sum);

    return 0;
}