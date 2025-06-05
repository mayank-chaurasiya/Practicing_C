# include <stdio.h>
# include <string.h>

struct students
{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct students ece[100];
    ece[0].roll = 164;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "Mayank");

    printf("name = %s\n", ece[0].name);
    printf("roll = %d\n", ece[0].roll);
    printf("cgpa = %f\n", ece[0].cgpa);

    return 0;
}