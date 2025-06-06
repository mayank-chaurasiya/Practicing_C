# include <stdio.h>
# include <string.h>
#define MAX_CHAR 256

void printMaxOccuringChar(char* str) {
    int count[MAX_CHAR] = {0};
    int len = strlen(str);
    int max = 0;
    char result;

    for(int i = 0; i < len; i++)
        count[str[i]]++;
    for(int i = 0; i < len; i++) {
        if(max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }

    printf("The character with the highest frequency is '%c'\n", result);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printMaxOccuringChar(str);
    return 0;
}
