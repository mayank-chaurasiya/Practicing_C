//47. Dynamic memory allocation using calloc function..

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, i;
    int *m;

    printf("Enter the number \n");
    scanf("%d", &n);

    printf("Memory allocation started:: \n");
    m = (int*) calloc (n, sizeof(int));

    if(m == NULL) {
        printf("Memorey not allocated\n");
        exit(0);
    } else {
        printf("Memory allocated \n");

        for(i = 0; i < n; i++) {
            scanf("%d", m+i);
        }
    }

    printf("Display elements and their allocated memory address: \n");

    for(i = 0; i < n; i++) {
        printf("%d\t", *(m+i));
        printf("%d\t", (m+i));
    }

    return 0;
}