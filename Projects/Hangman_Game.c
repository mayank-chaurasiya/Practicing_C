#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 50
#define MAX_TRIES 6

struct WordWithHint
{
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

// Function to display current state of the word
void displayWord(const char word[], const bool guessed[]);

// Function to draw Hangman
void drawHangman(int tries);

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Array of words with hints
    struct WordWithHint wordList[] = {
        {"pizza", "A popular Italian dish"},
        {"beach", "Sandy shore by the sea"},
        {"elephant", "A Large mammal with a trunk"},
        {"democracy", "A government by the people"},
    };

    // selecting a random word from the list
    int wordIndex = rand() % 4;

    const char *secretWord = wordList[wordIndex].word;
    const char *hint = wordList[wordIndex].hint;

    int wordLength = strlen(secretWord);
    char guessedWord[MAX_WORD_LENGTH] = {0};
    bool guessedLetters[26] = {false};

    printf("Welcome to Hangman!\n");
    printf("Hint: %s\n", hint);

    int tries = 0;

    while (tries < MAX_TRIES)
    {
        printf("\n");
        displayWord(guessedWord, guessedLetters);
        drawHangman(tries);

        char guess;
        printf("Enter a Letter: ");
        scanf("%c", &guess);
        guess = tolower(guess);

        if (guessedLetters[guess - 'a'])
        {
            printf("You've already guessed that letter. Try again.\n");
            continue;
        }

        guessedLetters[guess - 'a'] = true;

        bool found = false;
        for (int i = 0; i < wordLength; i++)
        {
            if (secretWord[i] == guess)
            {
                found = true;
                guessedWord[i] = guess;
            }
        }

        if (found)
        {
            printf("Good guess!\n");
        }
        else
        {
            printf("Sorry, the letter '%c' is not in the word. \n", guess);
            tries++;
        }

        if (strcmp(secretWord, guessedWord) == 0)
        {
            printf("\nCongratulations! You've guessed the word: %s\n", secretWord);
            break;
        }
    }
}