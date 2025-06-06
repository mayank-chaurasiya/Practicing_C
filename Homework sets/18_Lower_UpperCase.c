//Homework set 06: c:
//Write a program in C to print all the letters in English alphabet using a pointer.

# include <stdio.h>

void smallLetters(char *ptr1);
void capitalLetters(char *ptr2);

int main() {
    char alphabet1 = 'a';
    char *ptr1 = &alphabet1;

    char alphabet2 = 'A';
    char *ptr2 = &alphabet2;

    int option;
    printf("Alphabets you want to print:\n 1)Lowercase  2)Upercase\n");
    scanf("%d", &option);
    
    switch (option)
    {
    case 1:
        printf("The Lowercase letters are : ");
        smallLetters(&alphabet1);
        break;
    case 2:
        printf("The Upercase letters are : ");
        capitalLetters(&alphabet2);
        break;
    
    default: printf("Please choose an option form above!!");
        break;
    }
    
    return 0;
}

void smallLetters(char *ptr1) {
    for(int i = 0; i < 26; i++) {
        *ptr1 = 'a' + i;
        printf("%c ", *ptr1);
    }
    printf("\n");
}

void capitalLetters(char *ptr2) {
    for(int i = 0; i < 26; i++) {
        *ptr2 = 'A' + i;
        printf("%c ", *ptr2);
    }
    printf("\n");
}