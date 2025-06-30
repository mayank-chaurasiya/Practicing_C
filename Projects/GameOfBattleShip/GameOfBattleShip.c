#include <stdio.h>

int main()
{
    int ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 1},
        {0, 1, 0, 1},
        {1, 0, 0, 0}};

    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 4)
    {
        int row, column;
        printf("Selecting Coordinates\n");

        printf("Choose a row number : ");
        scanf("%d", &row);

        printf("Choose a column number : ");
        scanf("%d", &column);

        // check if a ship exists in those coordinates
        if (ships[row][column])
        {
            // if the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left.
            printf("Hit! %d left.\n\n", 4 - hits);
        }
        else
        {
            // Tell the player that they missed
            printf("Miss!");
        }
        numberOfTurns++;
    }
    printf("Victory!\n");
    printf("You won in %d turns", numberOfTurns);
}