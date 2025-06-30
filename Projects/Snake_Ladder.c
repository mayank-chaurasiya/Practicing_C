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
        
    }
}