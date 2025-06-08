#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// function to implement the game
int game(char you, char computer)
{
    // If both the user and computer has choose the same thing
    if (you == computer)
    {
        return -1;
    }

    // If user's choice is paper and computer's choice is paper
    if (you == 's' && computer == 'p')
    {
        return 0;
    }
    // If user's choice is paper and computer's choice is stone
    else if (you == 'p' && computer == 's')
    {
        return 1;
    }

    // if user's choice is stone and computer's choice is scissor
    if (you == 's' && computer == 'z')
    {
        return 1;
    }
    // if user's choice is scissor and computer's choice is stone
    else if (you == 'z' && computer == 's')
    {
        return 0;
    }

    // if user's choice is paper and computer's choice is scissor
    if (you == 'p' && computer == 'z')
    {
        return 0;
    }
    // if user's choice is scissor and computer's choice is paper
    else if (you == 'z' && computer == 'p')
    {
        return 1;
    }
}

int main()
{
    int n; // stores teh random number
    char you, computer, result;

    srand(time(NULL));

    // make the random number less than 100 divided it by 100
    n = rand() % 100;

    // using simple probablitiy 100 is roughly divided among stone paper, and scissor
    if (n < 33)
    {
        computer = 's'; // s is denoting stone
    }
    else if (n > 33 && n < 66)
    {
        computer = 'p'; // p is denoting paper
    }
    else
    {
        computer = 'z';
    }

    printf("\n\n\nEnter s for STONE, p for PAPPER, z for SCISSORS\n");
    // input from the user
    scanf("%c", &you);

    // function call to play the game
    result = game(you, computer);

    if (result == -1)
    {
        printf("\nGame Draw!\n");
    }
    else if (result == 1)
    {
        printf("\nWow! you have won the game!\n");
    }
    else
    {
        printf("\n\nOh! You have lost the game!\n");
    }
    printf("You choose : %c and Computer choose : %c\n", you, computer);

    return 0;
}