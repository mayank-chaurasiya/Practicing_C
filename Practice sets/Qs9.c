//Practice Question 09::::
//Write a program to check if a student passed or failed;

# include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if(marks >= 30 && marks <= 100) {
        printf("PASS");
    } else if(marks < 30 && marks >= 0){
        printf("FAIL");
    } else {
        printf("Wrong value");
    }

    return 0;
}