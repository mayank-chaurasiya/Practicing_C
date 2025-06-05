# include <stdio.h>

int main() {
int marks[3];
float total = 0;
float average;
char grade;

printf("Enter the marks of three subjects: ");

for (int i = 0; i < 3; i++) {
scanf("%d", &marks[i]);
total += marks[i];
}

average = total / 3;

if (average >= 90) {
grade = 'A';
} else if (average >= 80) {
grade = 'B';
} else if (average >= 70) {
grade = 'C';
} else if (average >= 60) {
grade = 'D';
} else {
grade = 'F';
}

printf("The average is %f and the grade is %c\n", average, grade);

return 0;
}