//2. Print your own name on the screen.

# include <stdio.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, 100, stdin);
    printf("\nYour name is: ");
    puts(name);

    return 0;
}