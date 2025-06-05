//Swap 2 numbers, a & b.

# include <stdio.h>

void _swap(int *a, int *b);

int main() {
    int x, y;

    printf("Enter your number a: ");
    scanf("%d", &x);
    printf("Enter your number b: ");
    scanf("%d", &y);
    printf("Numbers before swaping: a = %d : b = %d\n", x, y);

    _swap(&x, &y);

    printf("numbers after swaping: x = %d & y = %d\n", x, y);
    return 0;
}

//call by reference
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}