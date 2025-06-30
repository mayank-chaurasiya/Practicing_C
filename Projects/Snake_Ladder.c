#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to roll a six - sided die
int rollDie() { return rand() % 6 + 1; }

// global variables to store positions of player1 and player2
int player1 = 0, player2 = 0;

// Function to print the board
void printBoard()
{
    // Logic to print a snake - ladder Game Board programmer can implement their own logic for the board, // this is one way to print a snake ladder board.
    int board[101];
    for (int i = 1; i <= 100; i++)
    {
        board[i] = i;
    }

    int alt = 0;
    int left_Right = 101;
    int right_Left = 80;
    int val = 100;

    while (val--)
    {
        if (alt == 0)
        {
            left_Right--;
            if (left_Right == player1)
            {
                printf("#P1     ");
            }
            else if (left_Right == player2)
            {
                printf("#P2     ");
            }
            else
            {
                printf("%d      ", board[left_Right]);
            }

            if (left_Right % 10 == 1)
            {
                printf("\n\n");
                alt = 1;
                left_Right -= 10;
            }
        }
        else
        {
            right_Left++;
            if (right_Left == player1)
            {
                printf("#P1     ");
            }
            else if (right_Left == player2)
            {
                printf("#P2     ");
            }
            else
            {
                printf("%d      ", board[right_Left]);
            }

            if (right_Left % 10 == 0)
            {
                printf("\n\n");
                alt = 0;
                right_Left -= 30;
            }
        }
        if (right_Left == 10)
        {
            break;
        }
    }
    printf("\n");
}

// Function to move the player
int movePlayer(int currentPlayer, int roll)
{
    int newPosition = currentPlayer + roll;
    // define the positions of snakes and ladderes on the board
    int snakesAndLadders[101];

    for (int i = 0; i <= 100; i++)
    {
        snakesAndLadders[i] = 0;
    }

    // here positive weights represent a ladder and negative weights represent a snake.
    snakesAndLadders[6] = 40;
    snakesAndLadders[23] = -10;
    snakesAndLadders[45] = -7;
    snakesAndLadders[61] = -18;
    snakesAndLadders[65] = -8;
    snakesAndLadders[77] = 5;
    snakesAndLadders[98] = -10;
}
