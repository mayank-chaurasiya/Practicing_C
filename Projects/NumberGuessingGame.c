# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <conio.h>

int main(){
    int number, guess, n_guesses = 1;
    srand(time(0));
    number = rand()%100 + 1;//Generates a random number between 1 and 100
        do {
        printf("Guess the number between 1 to 100 :\t");
        scanf("%d", &guess);
        if(guess> number){
            printf("Lower number please!\n");
        }
        else if(guess < number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attemps\n", n_guesses);
        }
        n_guesses++;
    }while(guess != number);

    getch();
    return 0;
}