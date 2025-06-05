//Practice Question 48::::
//Ask the user to enter their firstName & print it back to them. also try this with their fullName.

# include <stdio.h>

int main() {
    // char firstName[50];
    // printf("Enter your firstName: ");
    // scanf("%s", &firstName);
    // printf("your name is %s", firstName);

    char str[100];
    printf("Enter your name: ");
    fgets(str, 100, stdin);
    printf("\nYour name is : ");
    puts(str);
    return 0;
}