# include <stdio.h>
# include <string.h>

//user defined 
struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1;
    s1.roll = 1443;
    s1.cgpa = 9.5;
    strcpy(s1.name, "mayank");

    printf("student name = %s\n", s1.name);
    printf("Student roll no. = %d\n", s1.roll);
    printf("student cgpa %f\n", s1.cgpa);
    
    return 0;
}