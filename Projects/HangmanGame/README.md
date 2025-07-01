# Hangman Game - Code Explanation and Dry Run

---

## 1. Initialization

- **Word List:**  
  The game has 4 words, each with a hint:
  - "pizza" – "A popular Italian dish"
  - "beach" – "Sandy shore by the sea"
  - "elephant" – "A Large mammal with a trunk"
  - "democracy" – "A government by the people"

- **Random Selection:**  
  `wordIndex = rand() % 4;` randomly selects one word and its hint.

- **Variables:**  
  - `secretWord` points to the chosen word.
  - `hint` points to the chosen hint.
  - `wordLength` is the length of the chosen word.
  - `guessedWord` is an array to store the correctly guessed letters (initially empty).
  - `guessedLetters[26]` tracks which letters (a-z) have been guessed (all false initially).
  - `tries = 0` (number of incorrect guesses).

---

## 2. Game Loop

The game continues while `tries < MAX_TRIES` (6 tries allowed).

### Each Turn:

#### a. Display State
- Prints the current state of the word using `displayWord(guessedWord, guessedLetters)`.
- Draws the hangman using `drawHangman(tries)`.

#### b. Input Guess
- Prompts the user to enter a letter.
- Converts the letter to lowercase.

#### c. Check for Repeat
- If the letter was already guessed (`guessedLetters[guess - 'a']`), prints a message and continues to the next iteration.

#### d. Mark Letter as Guessed
- Sets `guessedLetters[guess - 'a'] = true`.

#### e. Check if Letter is in Word
- Loops through each character in `secretWord`:
  - If the guessed letter matches, sets `guessedWord[i] = guess` and marks `found = true`.

#### f. Update Tries or Congratulate
- If the letter was found, prints "Good guess!".
- If not, prints a message and increments `tries`.

#### g. Check for Win
- If `strcmp(secretWord, guessedWord) == 0`, the player has guessed the word and wins.

---

## 3. Game End

- If the player guesses the word, prints a congratulatory message.
- If `tries` reaches 6, prints a loss message and reveals the word.

---

## 4. Helper Functions

- **displayWord:**  
  Prints the word with guessed letters revealed and others as underscores.

- **drawHangman:**  
  Prints parts of the hangman drawing based on the number of wrong tries.

---

## Example Dry Run

Suppose the random word is `"pizza"`.

### Initial State:
- Word: `_ _ _ _ _`
- Tries: 0

### Turn 1:  
- User guesses `p`
- `p` is in the word → `guessedWord[0] = 'p'`
- Word: `p _ _ _ _`
- Tries: 0

### Turn 2:  
- User guesses `e`
- `e` is not in the word
- Tries: 1

### Turn 3:  
- User guesses `z`
- `z` is in the word → `guessedWord[2] = 'z'`, `guessedWord[3] = 'z'`
- Word: `p _ z z _`
- Tries: 1

### Turn 4:  
- User guesses `a`
- `a` is in the word → `guessedWord[4] = 'a'`
- Word: `p _ z z a`
- Tries: 1

### Turn 5:  
- User guesses `i`
- `i` is in the word → `guessedWord[1] = 'i'`
- Word: `p i z z a`
- Tries: 1

- All letters guessed!  
- Prints: "Congratulations! You've guessed the word: pizza"

---

## Summary

- The game randomly selects a word and gives a hint.
- The player guesses letters, with up to 6 wrong tries allowed.
- Correct guesses reveal letters; incorrect guesses draw the hangman.
- The game ends with a win (all letters guessed) or a loss (6 wrong tries).