# include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"mayank", 1664, 7.9};
    printf("Student's roll number = %d\n", s1.roll);

//pointers to structures:
    struct student *ptr = &s1;
    printf("student details : %d\n", (*ptr).roll);
    printf("student details : %s\n", ptr->name);

    return 0;
}