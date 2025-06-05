//Practice Question 70::::
//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, num;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    int *odd = (int *)malloc(n * sizeof(int));
    int *even = (int *)malloc(n * sizeof(int));
    
    int count_odd = 0, count_even = 0;

    printf("Enter %d numbers: \n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 != 0) {
            odd[count_odd] = num;
            count_odd++;
        } else {
            even[count_even] = num;
            count_even++;
        }
    }

    printf("The odd numbers are: \n");
    for(int i = 0; i < count_odd; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nThe even numbers are: \n");
    for(int i = 0; i < count_even; i++) {
        printf("%d ", even[i]);
    }

    free(odd);
    free(even);

    return 0;
}