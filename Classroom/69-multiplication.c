//69. create an array of size 3 X 10 containing multiplication table of the number 2, 7 and 9 respectively.

# include <stdio.h>

void printTable(int *multiTable, int num, int n)
{
    printf("The multiplication table of %d is : \n", num);
    for(int i = 0; i < n; i++){
        multiTable[i] = num*(i+1);
    }

    for(int i = 0; i < 10; i++)
    {
    printf("%dX%d = %d\n",num, i+1, multiTable[i]);
    }
    printf("***************************************\n");
}

int main()
{
    int multiTable[3][10];
    printTable(*multiTable, 2, 10);
    printTable(*multiTable, 7, 10);
    printTable(*multiTable, 9, 10);

    return 0;
}