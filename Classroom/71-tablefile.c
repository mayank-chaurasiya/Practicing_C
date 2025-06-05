# include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("table.txt", "w");
    printf("Enter the integer you need the table of: \n");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt\n", num);
    return 0;
}