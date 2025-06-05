#include <stdio.h>
#include <stdlib.h> // Required for malloc

// Define the structure
struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student *s;  // Pointer to structures
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    s = (struct student *) malloc(n * sizeof(struct student));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (s == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    // Take input for n students
    for(i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", (s+i)->name);

        printf("Enter roll number: ");
        scanf("%d", &(s+i)->roll);

        printf("Enter marks: ");
        scanf("%f", &(s+i)->marks);
    }

    // Display information of n students
    for(i = 0; i < n; i++) {
        printf("\nDisplaying Information for student %d:\n", i+1);
        printf("Name: %s\n", (s+i)->name);
        printf("Roll number: %d\n", (s+i)->roll);
        printf("Marks: %.1f\n", (s+i)->marks);
    }

    // Free the memory
    free(s);

    return 0;
}
