//Practice Question 10::::

/*Write a Program to give grades to a student 
marks < 30 is C
30 <= marks < 70 is B
70 <= marks < 90 is A
90 <= marks <= 100 is A+
*/

# include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks(0-100) : ");
    scanf("%d", &marks);

    if(marks > 100) {
        printf("Please enter the correct value.");
    } else if(marks <= 100 && marks >= 90) {
        printf("your Grade is A+.\n");
    } else if(marks < 90 && marks >= 70) {
        printf("your Grade is A.\n");
    } else if(marks < 70 && marks >= 30) {
        printf("your Grade is B.\n");
    } else if(marks < 30 && marks >= 0) {
        printf("your Grade is C.\n");
    } else if(marks < 0) {
        printf("Enter the correct value.");
    }

    printf("Thank you and all the best for your future.");
    return 0;

}