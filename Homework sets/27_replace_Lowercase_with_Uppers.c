//Homework set 08: d:
//Write a program to replace lowercase letters with uppercase & vice versa in a string.

# include <stdio.h>
# include <ctype.h> //ctype.h library to check the case of each character and swap it.

void swapCase(char *str);

int main() {
    char str[100];
    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    swapCase(str);
    printf("String after swapping case : %s", str);

    return 0;
}

void swapCase(char *str) {
    int i = 0; 
    while(str[i]) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}