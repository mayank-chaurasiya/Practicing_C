#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// variable to keep track of number of students
int i = 0;

// Structure to store the student information
struct studentInfo
{
    char firstName[50];
    char lastName[50];
    int roll;
    float cgpa;
    int courseId[10];
} student[55];

// Function to add the student
void addStudent()
{
    printf("Add the Students Details\n");
    printf("________________________________________");
    printf("First name of the student: ");
    scanf("%s", student[i].firstName);
    printf("\n");
    printf("Last name of the student: ");
    scanf("%s", student[i].lastName);
    printf("\n");
    printf("Roll No. : ");
    scanf("%d", &student[i].roll);
    printf("\n");
    printf("CGPA obtained : ");
    scanf("%f", &student[i].cgpa);
    printf("\n");
    printf("Enter the course id of each course - ");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &student[i].courseId[j]);
    }
    i++;
}