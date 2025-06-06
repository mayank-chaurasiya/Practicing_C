//Homework set 08: c:
//Write a program to remove blank spaces in a string.

# include <stdio.h>

void removeSpaces(char *str);

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    removeSpaces(str);
    printf("String after removing spaces: %s", str);

    return 0;
}

void removeSpaces(char *str) {
    int count = 0;
    for(int i = 0; str[i]; i++) {
        if(str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}