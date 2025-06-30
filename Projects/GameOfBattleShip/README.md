# Battleship Game - Code Explanation and Dry Run

---

## 1. Initialization

- The board is a 4x4 grid, represented by the `ships` array:
- {0, 1, 1, 0}, {0, 0, 0, 1}, {0, 1, 0, 1}, {1, 0, 0, 0}
- `1` means a ship is present at that cell.
- `0` means water (no ship).

- `hits = 0` (no ships hit yet).
- `numberOfTurns = 0` (no turns taken yet).

---

## 2. Game Loop

The game continues while `hits < 4` (there are 4 ships to find).

### Each Turn:

#### a. Prompt for Coordinates

- Prints "Selecting Coordinates".
- Asks the user to enter a row number (`scanf("%d", &row);`).
- Asks the user to enter a column number (`scanf("%d", &column);`).

#### b. Check for Ship

- If `ships[row][column]` is `1`:
- Set `ships[row][column] = 0` (remove the ship).
- Increment `hits`.
- Print "Hit! X left." (where X is ships remaining).
- Else:
- Print "Miss!".

#### c. Increment Turn Counter

- `numberOfTurns++`.

---

## 3. Game End

- When `hits` reaches 4, the loop ends.
- Prints "Victory!" and "You won in X turns" (where X is the number of turns taken).

---

## Example Dry Run

Let's say the user enters these coordinates in order:

1. **(0,1)**

- `ships[0][1]` is 1 → Hit!
- Set to 0, `hits = 1`, `numberOfTurns = 1`
- Output: "Hit! 3 left."

2. **(1,3)**

- `ships[1][3]` is 1 → Hit!
- Set to 0, `hits = 2`, `numberOfTurns = 2`
- Output: "Hit! 2 left."

3. **(2,1)**

- `ships[2][1]` is 1 → Hit!
- Set to 0, `hits = 3`, `numberOfTurns = 3`
- Output: "Hit! 1 left."

4. **(3,0)**

- `ships[3][0]` is 1 → Hit!
- Set to 0, `hits = 4`, `numberOfTurns = 4`
- Output: "Hit! 0 left."

- Loop ends, prints "Victory!" and "You won in 4 turns".

---

## Summary

- The player guesses coordinates to find 4 hidden ships.
- Each correct guess removes a ship and increases the hit count.
- The game ends when all ships are found, and the number of turns taken is displayed.
