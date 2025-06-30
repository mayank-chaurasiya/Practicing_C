# Snake and Ladder Game - Code Explanation and Dry Run

---

## 1. **Initialization**

- `player1` and `player2` are both set to 0 (start position).
- `srand(time(0));` seeds the random number generator for dice rolls.
- `currentPlayer` is set to 1 (Player 1 starts).
- `won` is set to 0 (no one has won yet).

---

## 2. **Game Loop**

The game runs in a `while (!won)` loop, alternating between players until someone wins.

### **Each Turn:**

#### a. **Prompt Player**
- The game prints:  
  `Player X, press Enter to roll the dice...`
- Waits for Enter (`getchar()`).

#### b. **Roll Dice**
- Calls `rollDice()`, which returns a random number between 1 and 6.

#### c. **Move Player**
- Calls `movePlayer(currentPlayer_position, roll)`.
- This function:
  - Adds the dice roll to the player’s current position.
  - Checks if the new position is a snake or ladder (using `snakesAndLadders[]` array).
    - Positive value: ladder (move up).
    - Negative value: snake (move down).
  - If the new position is > 100, the move is invalid (player stays).
  - Returns the new position.

#### d. **Update and Print Board**
- Updates `player1` or `player2` with the new position.
- Prints the player's new position.
- Calls `printBoard()` to display the board:
  - The board is printed in a zigzag pattern (like a real snake and ladder board).
  - If a player is on a square, it prints `#P1` or `#P2` instead of the number.

#### e. **Check Win**
- If a player reaches square 100, prints a win message and sets `won = 1`.

#### f. **Switch Player**
- Alternates `currentPlayer` between 1 and 2.

---

## 3. **Board Printing Logic**

- The board is a 10x10 grid (1 to 100).
- It prints rows alternately left-to-right and right-to-left to mimic a real board.
- If a player is on a square, it prints `#P1` or `#P2`.
- Otherwise, it prints the square number.

---

## 4. **Snakes and Ladders**

- Defined in `movePlayer()`:
  - Ladders: 6 (+40), 77 (+5)
  - Snakes: 23 (-10), 45 (-7), 61 (-18), 65 (-8), 98 (-10)
- When a player lands on these squares, their position is adjusted accordingly.

---

## **Example Dry Run**

Let’s walk through the first few moves:

### **Start:**
- `player1 = 0`, `player2 = 0`, `currentPlayer = 1`

### **Turn 1 (Player 1):**
- Press Enter.
- Rolls a 4.
- `movePlayer(0, 4)` → newPosition = 4 (no snake/ladder).
- `player1 = 4`
- Print board (shows #P1 at 4).
- No win, switch to Player 2.

### **Turn 2 (Player 2):**
- Press Enter.
- Rolls a 6.
- `movePlayer(0, 6)` → newPosition = 6, ladder (+40) → 46.
- `player2 = 46`
- Print board (shows #P2 at 46).
- No win, switch to Player 1.

### **Turn 3 (Player 1):**
- Press Enter.
- Rolls a 5.
- `movePlayer(4, 5)` → newPosition = 9 (no snake/ladder).
- `player1 = 9`
- Print board (shows #P1 at 9).
- No win, switch to Player 2.

...and so on, until one player reaches 100.

---

## **Summary**

- Players take turns rolling a die and moving.
- If they land on a snake or ladder, their position is adjusted.
- The board is printed after each move.
- First to reach 100 wins.
