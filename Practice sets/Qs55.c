//Practice Question 55::::
// Write a program to store the data of 3 students.

# include <stdio.h>

struct students
{
    char name[100];
    int roll_N0, phone_no;
    float cgpa;
    char sec;
};


int main() {
    int i, n;

//Array of structures for n students.
    struct students s[10];
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

//Take input for n students--
    for(i = 0; i < n; i++) {
        printf("\nEnter information--\n");

//Student Name--
        printf("Enter name: ");
        scanf("%s", s[i].name);
//Student Roll--
        printf("Enter roll No.: ");
        scanf("%d", &s[i].roll_N0);
//Student's Phone number--
        printf("Enter Phone No.: ");
        scanf("%d", &s[i].phone_no);
//Students section--
        printf("Enter section: ");
        scanf("%s", &s[i].sec);
//Student's cgpa--
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }

//Display information of n students--
    for(i = 0; i < n; i++) {
        printf("\nDisplaying Information for students %d:\n", i+1);

        printf("Student_Name: %s\n", s[i].name);
        printf("Roll_Number: %d\n", s[i].roll_N0);
        printf("Phone_Number: %d\n", s[i].phone_no);
        printf("Section: %c\n", s[i].sec);
        printf("CGPA: %.1f\n", s[i].cgpa);
    }

    return 0;
}