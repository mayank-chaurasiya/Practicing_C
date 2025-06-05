//using 2D array--

# include <stdio.h>

#define SIZE 3 //Size of the vectors 

//function to add two vectors
void addVectors(int vector1[SIZE], int vector2[SIZE], int reseult[SIZE]);

int main() {
    int vector1[SIZE] = {1, 2, 3};
    int vector2[SIZE] = {4, 5, 6};
    int result[SIZE];

    addVectors(vector1, vector2, result);

    printf("The resulting vector is: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

void addVectors(int vector1[SIZE], int vector2[SIZE], int reseult[SIZE]){
    for(int i = 0; i < SIZE; i++) {
        reseult[i] = vector1[i] + vector2[i];
    }
}