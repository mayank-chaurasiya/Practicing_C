//19. Program to print the series of 1, 2, 3...20 using for, while and do_while loops.

# include <stdio.h>

int main() {

//for loop
    // for(int i=1; i<=20; i++) {
    //     printf("%d ", i);
    // }

//while loop
    // int i=1;
    // while(i<=20) {
    //     printf("%d ", i);
    //     i++;
    // }

//do_while loop
    int i=1;
    do{
        printf("%d ", i);
        i++;
    }
    while (i<20);
    
    return 0;
}