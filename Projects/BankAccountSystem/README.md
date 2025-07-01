# Bank Account System - Code Explanation and Dry Run

---

## 1. Program Start & Main Menu

- The program starts and displays a main menu:
  1.... CREATE A BANK ACCOUNT 2.... ALREADY A USER? SIGN IN 3.... EXIT
- The user enters a choice (`scanf("%d", &choice);`).

---

## 2. Choice Handling

### Case 1: Create a Bank Account

- Clears the screen and prompts for username and password limits.
- Calls `account()`.

#### Inside `account()`

- Prompts the user for:
- First name, last name, father’s name, mother’s name, address, account type, date of birth, Aadhar number, phone number, username, and password.
- Password is entered character by character and displayed as `*`.
- All details are stored in a `struct pass` and written to `username.txt`.
- Calls `accountcreated()`.

#### Inside `accountcreated()`

- Displays a processing message.
- Shows "ACCOUNT CREATED SUCCESSFULLY...."
- Prompts to press enter to login, then calls `login()`.

---

### Case 2: Already a User? Sign In

- Calls `login()`.

#### Inside `login()`

- Prompts for username and password (password masked as `*`).
- Opens `username.txt` and searches for the entered username.
- If found, calls `loginsu()` and then `display(username)`.

#### Inside `loginsu()`

- Displays "LOGIN SUCCESSFUL...."
- Prompts to press enter to continue.

#### Inside `display(username)`

- Reads user data from `username.txt` and displays account info.
- Shows a menu:
  1....CHECK BALANCE 2....TRANSFER MONEY 3....LOG OUT 4....EXIT
- User enters a choice.

---

## 3. After Login Menu

### Case 1: Check Balance

- Calls `checkbalance(username)`.

#### Inside `checkbalance()`

- Reads all transactions from `mon.txt` where `usernameto` matches the current user.
- Displays each transaction and sums the total balance.
- Shows the total amount.
- Waits for a key press, then returns to `display(username)`.

---

### Case 2: Transfer Money

- Calls `transfermoney()`.

#### Inside `transfermoney()`

- Prompts for:
- Your username
- Recipient's username
- Amount to transfer
- Checks if recipient exists in `username.txt`.
- Writes the transaction to `mon.txt`.
- Displays a progress bar and success message.
- Returns to `display(your username)`.

---

### Case 3: Log Out

- Calls `logout()`, which displays a logging out message and then returns to `login()`.

---

### Case 4: Exit

- Exits the program.

---

## 4. Data Storage

- **User details** are stored in `username.txt` (binary file).
- **Transactions** are stored in `mon.txt` (binary file).

---

## Example Dry Run

### Creating an Account

1. User selects option 1.
2. Enters all required details.
3. Password is entered as stars.
4. Account is created and user is prompted to login.

### Logging In

1. User selects option 2.
2. Enters username and password.
3. If correct, login is successful and account info is displayed.

### Transferring Money

1. User selects "TRANSFER MONEY".
2. Enters their username, recipient's username, and amount.
3. Transaction is recorded and success message shown.

### Checking Balance

1. User selects "CHECK BALANCE".
2. All transactions to the user are displayed and summed.

---

## Summary

- The system allows users to create accounts, login, check balance, and transfer money.
- All data is stored in files.
- The program uses structures for user and transaction data, and provides a simple text-based interface.
