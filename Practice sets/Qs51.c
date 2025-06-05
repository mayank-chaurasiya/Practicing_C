//Practice Question 51::::
//Salting** Find the salted form of a password entered by user if the salt is "123" & added at the end.

# include <stdio.h>
# include <string.h>

void salting(char password[]);

int main() {
    char password[20];
    printf("Enter your password(0-20): ");
    scanf("%s", password);
    salting(password);

    return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newPass[40];

    strcpy(newPass, password);// newPass = "test"
    strcat(newPass, salt);// newPass = "test" + "123"
    puts(newPass);
}