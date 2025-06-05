// 56. write a program to count number of vowels in a string.

# include <stdio.h>
# include <string.h>

void main()
{
    char s[] = {"Hello Mayank!!"};
    int i = 0,  count = 0;

    printf("String = %s\n", s);

    while(i < strlen(s))
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf("total vowels = %d", count);
}