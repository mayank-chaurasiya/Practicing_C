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
            printf("Course id's : \n");
            for (int j = 0; j < 5; j++)
            {
                printf("The Course ID are %d\n", student[i].courseId[j]);
            }
        }
        else
        {
            printf("Roll no. not registerd..");
            break;
        }
    }
}

// Function to find the student by the first name
void findByFirstname()
{
    char a[50];
    printf("Enter the First Name of the student \n");
    scanf("%s", a);
    int c = 0;

    for (int j = 1; j <= i; j++)
    {
        if (!strcmp(student[j].firstName, a))
        {
            printf("The Students Details are :- \n");
            printf("Full name : %s %s\n", student[i].firstName, student[i].lastName);
            printf("Roll no. : %d\n", student[i].roll);
            printf("CGPA scored : %f \n", student[i].cgpa);
            printf("Course id's : \n");

            for (int j = 0; j < 5; j++)
            {
                printf("The course ID are %d\n", student[i].courseId[j]);
            }
            c = 1;
        }
        else
        {
            printf("First Name not found \n");
            break;
        }
    }
}

// Function to find the students enrolled in a particular course
void findByCourse()
{
    int id;
    printf("Enter the course ID \n");
    scanf("%d", &id);
    int c = 0;

    for (int j = 1; j <= i; j++)
    {
        for (int d = 0; d < 5; d++)
        {
            if (id == student[j].courseId[d])
            {
                printf("The Students Details are :- \n");
                printf("Full name : %s %s\n", student[i].firstName, student[i].lastName);
                printf("Roll no. : %d\n", student[i].roll);
                printf("CGPA scored : %f \n", student[i].cgpa);

                c = 1;
                break;
            }
            else
            {
                printf("The first name not found\n");
            }
        }
    }
}

// Function to print the total number of students

void totalStudent()
{
    printf("The total number of students are %d\n", i);
    printf("\n You can log max of 50 Student's Data.\n");
    printf(" remaining space in the system %d", 50 - i);
}

