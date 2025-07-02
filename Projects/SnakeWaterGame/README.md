# Snake Water Gun Game in C

This project is a simple C program that lets you play Snake Water Gun against the computer. The computer randomly selects snake, water, or gun, and you enter your choice. The program then determines the winner and displays the result.

---

## 1. **Header Files**
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```
- `stdio.h`: For input/output functions (`printf`, `scanf`).
- `stdlib.h`: For random number generation (`rand()`, `srand()`).
- `time.h`: For seeding the random number generator (`time(0)`).

---

## 2. **Game Logic Function**
```c
int snakeWaterGun(char you, char comp)
```
- Takes two characters: your choice (`you`) and the computer's choice (`comp`).
- Returns:
  - `0` if it's a draw,
  - `1` if you win,
  - `-1` if you lose.

### **Logic Inside the Function**
- If both choices are the same, return draw (`0`).
- Snake (`s`) vs Gun (`g`): Gun wins, so you lose (`-1`), you win (`1`) if reversed.
- Snake (`s`) vs Water (`w`): Snake drinks water, so you win (`-1`), you win (`1`) if reversed.
- Gun (`g`) vs Water (`w`): Water douses gun, so you lose (`-1`), you win (`1`) if reversed.

---

## 3. **Main Function**

### **Random Computer Choice**
```c
srand(time(0));
int number = rand()%100 + 1;
```
- Seeds the random number generator with the current time.
- Generates a random number between 1 and 100.

### **Assign Computer's Choice**
```c
if(number < 33)
    comp = 's';
else if(number > 33 && number < 66)
    comp = 'w';
else
    comp = 'g';
```
- If `number` is 1–32: computer picks snake (`'s'`).
- If `number` is 34–65: computer picks water (`'w'`).
- If `number` is 33 or 66–100: computer picks gun (`'g'`).
- **Note:** When `number == 33`, computer picks gun.

### **User Input**
```c
printf("Enter 's' for snake 'w' for water and 'g' for gun\n");
scanf("%c", &you);
```
- Prompts the user to enter their choice.

### **Play the Game**
```c
int result = snakeWaterGun(you, comp);
```
- Calls the function to determine the result.

### **Display Result**
```c
if (result == 0)
    printf("Game draw\n");
else if (result == 1)
    printf("You win\n");
else
    printf("You lose\n");
printf("You chose %c and computer chose %c. ", you, comp);
```
- Prints whether you won, lost, or drew.
- Shows both choices.

---

## **Example Dry Run**

Suppose the random number generated is **45**.

1. `number = 45` → `comp = 'w'` (water).
2. User enters `'g'` (gun).
3. Calls `snakeWaterGun('g', 'w')`:
   - Not equal, so not a draw.
   - Checks: `'g'` (gun) vs `'w'` (water) → returns `-1` (you lose).
4. Prints:
   - "You lose"
   - "You chose g and computer chose w."

---

## **Summary**

- The code implements the Snake Water Gun game.
- The computer randomly picks snake, water, or gun.
- The user enters their choice.
- The program compares both choices and prints the result (win, lose, or draw) along with both choices.