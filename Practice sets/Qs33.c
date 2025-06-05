//Practice Question 33::::
//Write a function to calculate Percentage of a student from marks in Science, Math & Sanskrit.

# include <stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main() {
    int science, math, sanskrit;
    printf("Enter the marks of Science: ");
    scanf("%d", &science);
    printf("Enter the marks of math: ");
    scanf("%d", &math);
    printf("Enter the marks of sanskrit: ");
    scanf("%d", &sanskrit);
    printf("Total marks : %d \n", science+math+sanskrit);

    printf("Percentage is : %d", calcPercentage(science, math, sanskrit));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) / 3);
}