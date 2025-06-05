//58. write a program to find the frequency of a character in a string

# include <stdio.h>

void main()
{
    char str[100], ch;
    int i , count = 0;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(ch == str[i])
        {
            count++;
        }
    }
    printf("Frequency of %c = %d", ch, count);
}