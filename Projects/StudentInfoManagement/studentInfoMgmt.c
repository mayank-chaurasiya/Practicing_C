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

// Function to Delete a Students data by the roll number
void deleteStudentByRoll()
{
    int roll;
    printf("Enter the Roll number which you want to remove from the system\n");
    scanf("%d", &roll);
    for (int j = 1; j <= i; j++)
    {
        if (roll == student[j].roll)
        {
            for (int k = j; k < 49; k++)
            {
                student[k] = student[k + 1];
            }
            i--;
        }
    }
    printf("Student data associated with %d Roll number has been removed.\n", roll);
}

// Function to update Students Data
void updateInfo()
{
    long int roll;
    printf("Enter the roll number to update the entry : ");
    scanf("%ld", &roll);

    for (int j = 0; j < i; j++)
    {
        if (student[j].roll == roll)
        {
            int option;
            printf("1. First Name \n 2. Last Name \n 3. Roll no. \n 4. CGPA \n 5. Courses \n");
            scanf("%d", &option);

            switch (option)
            {
            case 1:
                printf("Enter new First name : \n");
                scanf("%s", student[j].firstName);
                break;

            case 2:
                printf("Enter new Last name : \n");
                scanf("%s", student[j].lastName);
                break;

            case 3:
                printf("Enter new Roll : \n");
                scanf("%d", &student[j].roll);
                break;

            case 4:
                printf("Enter updated CGPA : \n");
                scanf("%f", &student[j].cgpa);
                break;

            case 5:
                printf("Enter updated course id's : \n");
                scanf("%d%d%d%d%d", &student[j].courseId[0], &student[j].courseId[1], &student[j].courseId[2], &student[j].courseId[3], &student[j].courseId[4]);
                break;
            }
            printf("--------------- UPDATED LOG'S SUCCESFULLY ----------------");
        }
    }
}