# Number Guessing Game - Code Explanation and Dry Run

---

## 1. Initialization

- `int number, guess, n_guesses = 1;`
  - `number`: the random number to guess.
  - `guess`: the user's current guess.
  - `n_guesses`: counts the number of attempts (starts at 1).

- `srand(time(0));`
  - Seeds the random number generator with the current time, so the random number changes each run.

- `number = rand()%100 + 1;`
  - Generates a random number between 1 and 100 (inclusive).

---

## 2. Game Loop

- The game uses a `do...while` loop that continues until the user guesses the correct number.

### Each Iteration:

1. **Prompt User**
   - Prints: `Guess the number between 1 to 100 :`
   - Waits for user input (`scanf("%d", &guess);`).

2. **Check Guess**
   - If `guess > number`:
     - Prints: `Lower number please!`
   - Else if `guess < number`:
     - Prints: `Higher number please!`
   - Else (correct guess):
     - Prints: `You guessed it in X attempts` (where X is `n_guesses`).

3. **Increment Attempt Counter**
   - `n_guesses++`

4. **Repeat**
   - Loop continues until `guess == number`.

---

## 3. End of Game

- After the correct guess, the program waits for a key press (`getch();`) and then exits.

---

## Example Dry Run

Suppose the random number is **57**.

### First Attempt
- User enters: `30`
- 30 < 57 → Prints: `Higher number please!`
- `n_guesses` becomes 2

### Second Attempt
- User enters: `80`
- 80 > 57 → Prints: `Lower number please!`
- `n_guesses` becomes 3

### Third Attempt
- User enters: `60`
- 60 > 57 → Prints: `Lower number please!`
- `n_guesses` becomes 4

### Fourth Attempt
- User enters: `57`
- 57 == 57 → Prints: `You guessed it in 4 attempts`
- Loop ends, program waits for key press and exits.

---

## Summary

- The program generates a random number between 1 and 100.
- The user keeps guessing until they get it right.
- After each guess, the program gives a hint: "Higher" or "Lower".
- When the user guesses correctly, it shows the number of attempts