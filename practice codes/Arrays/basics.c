# include <stdio.h>

int main() {
    // int marks1 = 97;
    // int marks2 = 98;
    // int marks3 = 99;

    int marks[3];
    printf("Enter the marks of physics: ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of maths: ");
    scanf("%d", &marks[2]);


    printf("Marks of Phy : %d, chem: %d, and maths : %d", marks[0], marks[1], marks[2]);
    return 0;
}