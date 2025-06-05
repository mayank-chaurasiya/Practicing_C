#include <stdio.h>

// Define the structure
struct student {
    char name[50];
    int roll;
    float marks;
};

#define MAX_STUDENTS 100  // Maximum number of students

int main() {
    struct student s[MAX_STUDENTS];  // Array of structures
    int i, n;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    // Take input for n students
    for(i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display information of n students
    for(i = 0; i < n; i++) {
        printf("\nDisplaying Information for student %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Marks: %.1f\n", s[i].marks);
    }

    return 0;
}
