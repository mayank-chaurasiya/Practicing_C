//46. dynamic memory allocation using malloc..

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, i;
    int *p;

    printf("Enter the number \n");
    scanf("%d", &n);

    printf("memory allocation started \n");
    
    p = (int*)malloc(n*sizeof(int));

    if(p == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }
    else {
        printf("Memory allocated is : \n");

        for(i = 0; i < n; i++) {
            scanf("%d", p+i);
        }
        
    }

    printf("Display elements and its memory address: \n");

        for(i = 0; i < n; i++) {
            printf("%d\t", *(p+i));
            printf("%d\t", (p+i));
        }

    return 0;
}