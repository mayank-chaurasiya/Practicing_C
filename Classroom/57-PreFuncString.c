// 57. predefined functions of string (strlen(), strcpy(), strcat(), strcmp()) write programs to use them without using standard library function.

# include <stdio.h>
// # include <stdlib.h>

int strLen(char str[])
{
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

void strCpy(char dest[], char src[])
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void strCat(char dest[], char src[]) 
{
    int i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++; 
        j++;
    }
    dest[i] = '\0';
}

int strCmp(char str[], char src[])
{
    int i = 0;
    while(str[i] == src[i])
    {
        if(str[i] == '\0' || src[i] == '\0')
        {
            break;
        }
        i++;
    }
    if(str[i] == '\0' && src[i] == '\0')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void main() 
{
    char str[] = {"Hello Mayank"};
    char dest[20];
    char src[] = {"Mayank"};


//strlen();
    printf("length of string array ch is %d", strLen(str));
}