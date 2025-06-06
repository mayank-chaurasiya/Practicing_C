//Homework set 08: b:
// Write a program to print the highest frequency character in a string.

# include <stdio.h>
#define ASCII_SIZE 256

char getHighestFrequencyChar(char* str) {
    int count[ASCII_SIZE] = {0};
    int i, max = -1;
    char result;

    for(i = 0; str[i]; i++)
        count[str[i]]++;

    for(i = 0; i < ASCII_SIZE; i++)
        if(max < count[i]) {
            max = count[i];
            result = i;
        }

    return result;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char res = getHighestFrequencyChar(str);
    printf("The character with the highest frequency is '%c'\n", res);
    return 0;
}
