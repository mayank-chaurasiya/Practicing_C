//Homework set 08: a:
//Write a program to convert all lowercase vowels to uppercase in a String.

# include <stdio.h>

void convertVowelsToUpper(char *str) ;

int main() {
    char str[100];
    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    convertVowelsToUpper(str);
    printf("String after converting vowels to uppercase: %s", str);

    return 0;
}

void convertVowelsToUpper(char *str) {
    int i = 0;
    while(str[i] != 0) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = str[i] - 32;//valid for ASCII characters only.
        }
        i++;
    }
}