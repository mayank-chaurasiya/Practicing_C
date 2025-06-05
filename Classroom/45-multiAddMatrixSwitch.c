//45. take rows and columns for matrix A and B from user and take choice wheather to perform addition or multiplication.

#include <stdio.h>

int main() {
    int rows_a, cols_a, rows_b, cols_b, choice, i, j, k;

    // Get dimensions of matrix A
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rows_a);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &cols_a);

    // Get dimensions of matrix B
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rows_b);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &cols_b);

    // Check compatibility for multiplication (inner dimensions must be equal)
    if (cols_a != rows_b && (choice == 2)) {
        printf("Error! Matrices cannot be multiplied. Inner dimensions must be equal.\n");
        return 1;
    }

    // Declare matrices to store elements
    int matrix_a[rows_a][cols_a], matrix_b[rows_b][cols_b], result[rows_a][cols_b];

    // Get elements of matrix A
    printf("Enter elements for matrix A:\n");
    for (i = 0; i < rows_a; i++) {
        for (j = 0; j < cols_a; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    // Get elements of matrix B
    printf("Enter elements for matrix B:\n");
    for (i = 0; i < rows_b; i++) {
        for (j = 0; j < cols_b; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    // Get user choice (1 for addition, 2 for multiplication)
    printf("Enter your choice (1 - Addition, 2 - Multiplication): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Check if matrices have the same dimensions for addition
        if (rows_a != rows_b || cols_a != cols_b) {
            printf("Matrices must have the same dimensions for addition.\n");
            return 1;
        }

        // Perform matrix addition
        printf("Adding matrices...\n");
        for (i = 0; i < rows_a; i++) {
            for (j = 0; j < cols_a; j++) {
                result[i][j] = matrix_a[i][j] + matrix_b[i][j];
            }
        }

        // Print the resulting matrix
        printf("Resultant matrix:\n");
        for (i = 0; i < rows_a; i++) {
            for (j = 0; j < cols_a; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else if (choice == 2) {
        // Perform matrix multiplication (nested loop)
        printf("Multiplying matrices...\n");
        for (i = 0; i < rows_a; i++) {
            for (j = 0; j < cols_b; j++) {
                result[i][j] = 0;
                for (k = 0; k < cols_a; k++) {
                    result[i][j] += matrix_a[i][k] * matrix_b[k][j];
                }
            }
        }

        // Print the resulting matrix
        printf("Resultant matrix:\n");
        for (i = 0; i < rows_a; i++) {
            for (j = 0; j < cols_b; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid choice. Please enter 1 for addition or 2 for multiplication.\n");
    }

    return 0;
}
