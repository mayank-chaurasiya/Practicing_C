// 40. Program to multiply the matrix .

# include <stdio.h>

int main() {
    int a[10][10], b[10][10], multi[10][10];
    int i, j, k, r, c;

    printf("Enter the rows and colums respectively: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of array a: \n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of array b: \n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Perform multiplication--\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            multi[i][j] = 0;
            for(k = 0; k < c; k++) {
                multi[i][j] = multi[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication \n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", multi[i][j]);
        }
        printf("\n");
    }

    return 0;

}