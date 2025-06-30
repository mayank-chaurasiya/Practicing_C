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
}