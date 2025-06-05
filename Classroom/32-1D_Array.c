// 32. Take input form the user and store it in 1D array and display output.

# include <stdio.h>

int main() {
    int num[15], n;

    printf("Enter the no. of elements you wanna store: \n");
    scanf("%d", &n);

    printf("Enter elements: \n");

//Input--
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

//Output--
    for(int i = 0; i < n; i++) {
        printf("%d\t", num[i]);
    }

    return 0;
}