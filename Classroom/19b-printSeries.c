//19. Program to print the series of 2, 4, 6...20 using for, while and do_while loops.

# include <stdio.h>

int main() {

//for loop
    // for(int i=2; i<=20; i+=2) {
    //     printf("%d ", i);
    // }

//while loop
    // int i=2;
    // while(i<=20) {
    //     printf("%d ", i);
    //     i+=2;
    // }

//do_while loop
    int i=2;
    do{
        printf("%d ", i);
        i+=2;
    }
    while (i<=20);
    
    return 0;
}