// 55. Write a program to display characters of string using for loop

# include <stdio.h>
# include <string.h>

void main()
{
    char ch[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    for(int i = 0; i < 5; i++) 
    {
        printf("%c", ch[i]);
    }
}