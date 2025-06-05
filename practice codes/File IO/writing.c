#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "w");

    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);
    fputc('E', fptr);
    

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');
    fclose(fptr);
    return 0;
}