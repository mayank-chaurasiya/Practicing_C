# include <stdio.h>

int main() {
    char *canChange = "Hello World!";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    // char canNotChange[] = "Hello world";
    // puts(canNotChange);
    // canNotChange = "hello";

    return 0;
}