# include <stdio.h>
# include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main() {
    struct student s1 = {"mayank", 49, 8.0};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1) {
    printf("Student Information-- \n");
    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
}
