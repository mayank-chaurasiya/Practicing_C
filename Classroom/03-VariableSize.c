//3. find the size of a variable.

# include <stdio.h>

int main() {
    int integerVariable;
    float floatVariable;
    double doubleVariable;
    char characterVariable;

    printf("Size of int: %zu bytes\n", sizeof(integerVariable));
    printf("Size of float: %zu bytes\n", sizeof(floatVariable));
    printf("Size of double: %zu bytes\n", sizeof(doubleVariable));
    printf("Size of char: %zu bytes\n", sizeof(characterVariable));

    return 0;
}