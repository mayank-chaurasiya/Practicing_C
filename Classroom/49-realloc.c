//49. dynamically reallocate the memory size ..using realloc funtion.

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, i, k;
    int *p;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

//Allocate memory for n elements:
    p = (int*)malloc(n*sizeof(int));

    if(p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Enter the elements: \n");

        for(i = 0; i < n; i++) {
            scanf("%d", p+i);
        }
        
    }

    printf("Display elements and its memory address: \n");

        for(i = 0; i < n; i++) {
            printf("%d\t", *(p+i));
            printf("%d\t", (p+i));
        }

    printf("\nEnter the number of new elements(k): \n");
    scanf("%d", &k);

    p = (int*) realloc (p, k*sizeof(int));

    if(p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Enter the values in new elements: \n");

    for(i = n; i < k; i++) {
        scanf("%d", p+i);
    }

    printf("Display all elements and their respective memory address: \n");
        for(i = 0; i < k; i++) {
            printf("%d\t", *(p+i));
            printf("%d\t", (p+i));
        }

    free(p);

    return 0;
}