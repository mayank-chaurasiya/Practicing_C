# include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    char ch;
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    int a;
    fscanf(fptr, "%d", &a);
    printf("character = %d\n", a);
    fscanf(fptr, "%d", &a);
    printf("character = %d\n", a);
    fclose(fptr);
    return 0;
}