#include <stdio.h>

int fun() {
    static int count = 0; // static variable
    count++;
    return count;
}

int main() {
    printf("%d ", fun()); // Output: 1
    printf("%d ", fun()); // Output: 2
    return 0;
}
