// 43. Program to find the multiplicationa and addition of matrix .

# include <stdio.h>

void getMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix: \n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    if(rows != cols) {
        printf("Matrices cannot be added. Dimensions must be equal.\n");
        return;
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]) {
    if(cols1 != rows2 ) {
        printf("Matrices cannot be multiplied. Inner dimension must be equal.\n");
        return;
    }

    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            result[i][j] = 0; 
            for(int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];
    getMatrix(rows1, cols1, matrix1);

    printf("Enter the number of rows and columns for the second matrix(for addition): ");
    scanf("%d %d", &rows2, &cols2);

    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix cannot be added. Dimensions must be equal.\n");
    } else {
        int matrix2[rows2][cols2];
        getMatrix(rows2, cols2, matrix2);

        int result[rows1][cols1];
        addMatrices(rows1, cols1, matrix1, matrix2, result);

        printf("Sum of matirces: \n");
        printMatrix(rows1, cols1, result);
    }

    printf("Enter the number of rows and columns for the second matrix (for multiplication): ");
    scanf("%d %d", &rows2, &cols2);

    if(cols1 != rows2) {
        printf("Matrices cannot be multiplied, Inner dimensions must be equal.\n");
    } else {
        int result[rows1][cols2];
        int matrix2[rows2][cols2];
        multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

        printf("Product of matirces: \n");
        printMatrix(rows1, cols2, result);
    }

    return 0;
}
