//Practice Question 53::::
//Write a function to count the occurrence of vowels in a string.

# include <stdio.h>

int countVowel(char words[]);

int main() {
    char words[100];
    printf("Enter your string(in lowercase): ");
    fgets(words, 100, stdin);

    printf("No of Vowels are : %d", countVowel(words));

    return 0;
}

int countVowel(char words[]) {
    int count = 0;
    for(int i = 0; words[i] != '\0'; i++) {
        if(words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u') {
            count++;
        }
    }
    return count;
}