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

// function to find the student by the roll number
void findByRoll()
{
    int x;
    printf("Enter the roll number of the individual \n");
    scanf("%d", &x);

    for (int j = 1; j <= i; j++)
    {
        if (x == student[i].roll)
        {
            printf("The Students Details are :- \n");
            printf("Full name : %s %s\n", student[i].firstName, student[i].lastName);
            printf("Roll no. : %d\n", student[i].roll);
            printf("CGPA scored : %f \n", student[i].cgpa);
            printf("Course id's : ");
        }
        for (int j = 0; j < 5; j++)
        {
            printf("The Course ID are %d\n", student[i].courseId[j]);
        }
        break;
    }
}