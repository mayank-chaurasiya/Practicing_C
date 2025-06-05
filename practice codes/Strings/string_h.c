# include <stdio.h>
# include <string.h>

int main() {

//strlen(variableName)-- counts the length of String.
    // char name[100];
    // printf("Enter your Name(or any string): ");
    // scanf("%s", name);

    // printf("length is : %d", strlen(name));

//strcpy(newStr, oldStr)-- copies value of old string to new string.
    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";
    // strcpy(oldStr, newStr);
    // puts(newStr);

//strcat(firstStr, secStr)-- concatenates first string with second string.
    // char firstStr[100] = "Hello ";
    // char secStr[] = "World";
    // strcat(firstStr, secStr);
    // puts(firstStr);

//strcmp(firstStr, secStr)-- Compares 2 strings & returns a value.
    char firstStr[] = "HHHA";
    char secStr[] = "HHHB";
    printf("%d", strcmp(firstStr, secStr));
    return 0;
}