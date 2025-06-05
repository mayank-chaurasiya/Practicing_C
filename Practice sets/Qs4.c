//Practice Question 04::::

# include <stdio.h>
//Associativity and precedence of operators
int main() {
    int a = 5 * 2 - 3 * 2;
    int b = 5 * 2 / 2 * 3;
    int c = 5 *(2 / 2)* 3;
    int d = 5 + 2 / 2 * 3;
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}