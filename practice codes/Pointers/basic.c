# include <stdio.h>

int main() {
    int age = 22;
    int *ptr = & age;
    int _age = *ptr;

//address 
    // printf("%p", &age);
    // printf("%u\n", &age);

    // printf("%u\n", ptr);

    // printf("%u\n", &ptr);

    printf("%d\n", *ptr);

    printf("%d\n", *(&age));
    return 0;
}