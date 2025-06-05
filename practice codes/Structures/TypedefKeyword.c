# include <stdio.h>
# include <string.h>

typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} std;

int main() {
    std s1;
    s1.roll = 456;
    s1.cgpa = 6.7;
    strcpy(s1.name, "mayank");

    printf("Student name is %s\n", s1.name);
    
    return 0;
}
