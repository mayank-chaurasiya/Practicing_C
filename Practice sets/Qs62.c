// Practice Question 62::::
// Make a program to input student information from a user & enter it to a file.

# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name : %s\n", name);
    fprintf(fptr, "student age : %d\n", age);
    fprintf(fptr, "student cgpa : %f\n", cgpa);


    fclose(fptr);
    return 0;

}