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
    }
}