# Rock, Paper, Scissors Game in C

This project is a simple C program that lets you play Rock, Paper, Scissors against the computer. The computer randomly selects stone, paper, or scissors, and you enter your choice. The program then determines the winner and displays the result.

---

## 1. **Header Files**
```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
```
- `stdio.h`: For input/output functions.
- `stdlib.h`: For `rand()` and `srand()`.
- `time.h`: For `time()` to seed the random number generator.
- `math.h`: Not used in this code (can be removed).

---

## 2. **Game Logic Function**
```c
int game(char you, char computer)
```
- Takes two characters: your choice and the computer's choice.
- Returns:
  - `-1` if it's a draw,
  - `1` if you win,
  - `0` if you lose.

### **Logic Inside the Function**
- If both choices are the same, return draw (`-1`).
- Checks all possible win/lose conditions:
  - `'s'` = stone, `'p'` = paper, `'z'` = scissors.
  - Example: If you pick stone (`'s'`) and computer picks paper (`'p'`), you lose (`return 0`).
  - If you pick paper (`'p'`) and computer picks stone (`'s'`), you win (`return 1`).
  - Similar checks for all combinations.

---

## 3. **Main Function**
### **Random Computer Choice**
```c
srand(time(NULL));
n = rand() % 100;
```
- Seeds the random number generator.
- Generates a random number between 0 and 99.

### **Assign Computer's Choice**
```c
if (n < 33)
    computer = 's'; // stone
else if (n > 33 && n < 66)
    computer = 'p'; // paper
else
    computer = 'z'; // scissors
```
- If `n` is 0–32: computer picks stone.
- If `n` is 34–65: computer picks paper.
- If `n` is 33 or 66–99: computer picks scissors.
- **Note:** There is a small bug here: when `n == 33`, it will always pick scissors.

### **User Input**
```c
printf("\n\n\nEnter s for STONE, p for PAPPER, z for SCISSORS\n");
scanf("%c", &you);
```
- Prompts user to enter their choice.

### **Play the Game**
```c
result = game(you, computer);
```
- Calls the `game` function to determine the result.

### **Display Result**
```c
if (result == -1)
    printf("\nGame Draw!\n");
else if (result == 1)
    printf("\nWow! you have won the game!\n");
else
    printf("\n\nOh! You have lost the game!\n");
printf("You choose : %c and Computer choose : %c\n", you, computer);
```
- Prints whether you won, lost, or drew.
- Shows both choices.

---

## **Example Dry Run**

Suppose the random number generated is **45**.

1. `n = 45` → `computer = 'p'` (paper).
2. User enters `'z'` (scissors).
3. Calls `game('z', 'p')`:
   - Not equal, so not a draw.
   - Checks: `'z'` (scissors) vs `'p'` (paper) → user wins (`return 1`).
4. Prints:
   - "Wow! you have won the game!"
   - "You choose : z and Computer choose : p"

---

## **Summary**

- The code implements a simple Rock, Paper, Scissors game.
- The computer randomly picks stone, paper, or scissors.
- The user enters their choice.
- The program compares both choices and prints the result (win, lose, or draw) along with