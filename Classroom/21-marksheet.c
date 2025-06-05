//21. Write a Program to genereate marksheet on the screen for 5 subjects and display division accordingly.

# include <stdio.h>

int main() {
    char subjects[5][50] = {"English", "Maths", "Science", "Social studies", "Computer Science"};
    int marks[5];
    float total = 0.0;

    for(int i=0; i<5; i++) {
        printf("Enter marks for %s:", subjects[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    float avg = total/5;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);

    if(avg >= 60) {
        printf("First Division.");
    }
    else if(avg >= 50) {
        printf("Second Division.");
    }
    else if(avg >= 40) {
        printf("Third Division");
    }
    else {
        printf("Better luck! next time.");
    }

    return 0;
}