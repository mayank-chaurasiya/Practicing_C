// Homework set 08: d:
// Make a system that can store information of all students, teachers & staff of your college in the form of structures.

#include <stdio.h>
#include <string.h>

#define MAX_PEOPLE 100

typedef struct
{
    char name[50];
    int roll_no;
    char course[30];
} Student;

typedef struct
{
    char name[50];
    char subject[30];
    int emp_id;
} Teacher;

typedef struct
{
    char name[50];
    char position[30];
    int emp_id;
} Staff;

typedef enum
{
    STUDENT,
    TEACHER,
    STAFF
} PersonType;

typedef struct
{
    PersonType type;
    union
    {
        Student student;
        Teacher teacher;
        Staff staff;
    } info;
} Person;

void addStudent(Person *p)
{
    p->type = STUDENT;
    printf("Enter Student name: ");
    scanf(" %[^\n]", p->info.student.name);
    printf("Enter roll number: ");
    scanf("%d", &p->info.student.roll_no);
    printf("Enter course: ");
    scanf(" %[^\n]", p->info.student.course);
}

void addTeacher(Person *p)
{
    p->type = TEACHER;
    printf("Enter teacher name: ");
    scanf(" %[^\n]", p->info.teacher.name);
    printf("Enter subject: ");
    scanf(" %[^\n]", p->info.teacher.subject);
    printf("Enter employee ID: ");
    scanf("%d", &p->info.teacher.emp_id);
}

void addStaff(Person *p)
{
    p->type = STAFF;
    printf("Enter staff name: ");
    scanf(" %[^\n]", p->info.staff.name);
    printf("Enter position: ");
    scanf(" %[^\n]", p->info.staff.position);
    printf("Enter employee ID: ");
    scanf("%d", &p->info.staff.emp_id);
}

void displayPerson(const Person *p)
{
    if (p->type == STUDENT)
    {
        printf("Student: %s, Roll No: %d, Course: %s\n", p->info.student.name, p->info.student.roll_no, p->info.student.course);
    }
    else if (p->type == TEACHER)
    {
        printf("Teacher: %s, Subject: %s, Emp ID: %d\n", p->info.teacher.name, p->info.teacher.subject, p->info.teacher.emp_id);
    }
    else if (p->type == STAFF)
    {
        printf("Staff: %s, Position: %s, Emp ID: %d\n", p->info.staff.name, p->info.staff.position, p->info.staff.emp_id);
    }
}

int main()
{
    Person people[MAX_PEOPLE];
    int count = 0, choice;

    while (1)
    {
        printf("\n1. Add Student\n2. Add Teacher\n3. Add Staff\n4. Display All\n5. Exit\nEnter Choice: ");
        scanf("%d", &choice);
        if (choice == 1 && count < MAX_PEOPLE)
        {
            addStudent(&people[count++]);
        }
        else if (choice == 2 && count < MAX_PEOPLE)
        {
            addTeacher(&people[count++]);
        }
        else if (choice == 3 && count < MAX_PEOPLE)
        {
            addStaff(&people[count++]);
        }
        else if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                displayPerson(&people[i]);
            }
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            printf("Invalid choice or storage full.\n");
        }
    }
    return 0;
}