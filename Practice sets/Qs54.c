//Practice Question 54::::
//Check if a given character is present in a string or not.

# include <stdio.h>

void characterCheck(char word[], char ch);

int main() {
    char word[100];
    printf("Enter your word(lowercase only): ");
    fgets(word, 100, stdin);

    char ch;
    printf("Enter the character you wanna search from above string: ");
    scanf("%c", &ch);

    characterCheck(word, ch);
    return 0;
}

void characterCheck(char word[], char ch) {
    for(int i=0; word[i] != '\0'; i++) {
        if(word[i] == ch) {
            printf("%c is present in %s", ch, word);
            return;
        }
    }
    printf("%c is NOT present in %s.", ch, word);
}


