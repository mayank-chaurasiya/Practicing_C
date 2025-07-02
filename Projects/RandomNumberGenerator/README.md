# Random Number Guessing Game

This project is a simple C program that generates a random number between 1 and 100 and asks the user to guess it. The program provides hints after each guess and counts the number of attempts.

---

## 1. **Header Files**
```c
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
```
- `stdio.h`: For input/output functions (`printf`, `scanf`).
- `stdlib.h`: For `rand()` and `srand()`.
- `time.h`: For `time()` to seed the random number generator.

---

## 2. **Variable Declarations**
```c
int number, guess, n_guesses = 1;
```
- `number`: The random number to guess.
- `guess`: The user's guess.
- `n_guesses`: Counts the number of attempts (starts at 1).

---

## 3. **Random Number Generation**
```c
srand(time(0));
number = rand()%100 + 1;
```
- `srand(time(0))`: Seeds the random number generator with the current time, ensuring different results each run.
- `rand()%100 + 1`: Generates a random number between 1 and 100 (inclusive).

---

## 4. **Game Loop**
```c
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
```
- The loop continues until the user guesses the correct number.
- Each iteration:
  1. Prompts the user for a guess.
  2. Reads the guess.
  3. Compares the guess to the random number:
     - If the guess is too high, prints "Lower number please!"
     - If too low, prints "Higher number please!"
     - If correct, congratulates the user and shows the number of attempts.
  4. Increments the attempt counter.

---

## 5. **Program End**
```c
return 0;
```
- Exits the program.

---

## **Example Dry Run**

Suppose the random number generated is **57**.

1. User runs the program.
2. Program asks: "Guess the number between 1 to 100 :"
3. User enters `30`.
   - 30 < 57 → prints "Higher number please!"
   - Attempts: 2
4. User enters `80`.
   - 80 > 57 → prints "Lower number please!"
   - Attempts: 3
5. User enters `57`.
   - 57 == 57 → prints "You guessed it in 3 attemps"
   - Loop ends.

---

**Summary:**  
The code is a simple number guessing game. It generates a random number between 1 and 100, then repeatedly prompts the user to guess until they get it right, giving hints after each guess and counting the number of