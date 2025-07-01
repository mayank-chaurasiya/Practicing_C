#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Declaring all the funcitons
void checkbalance(char *);
void transfermoney(void);
void display(char *);
void person(char *);
void login(void);
void loginsu(void);
void account(void);
void accountcreated(void);
void afterlogin(void);
void logout(void);

// Declaring gotoxy function for setting curson position
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Creating a structure to store data of the user
struct pass
{
    char username[50];
    int date, month, year;
    char pnumber[15];
    char adharnum[20];
    char fname[20];
    char lname[20];
    char fathername[20];
    char mothername[20];
    char address[50];
    char typeaccount[20];
};

// Structure to keep track of amount transfer
struct money
{
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
};

struct userpass
{
    char password[50];
};

int main()
{
    int i, a, b, choice;
    int passwordlength;

    gotoxy(20, 3);

    // creating a main menu for the user
    printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
    gotoxy(18, 5);

    printf("**********************************");
    gotoxy(25, 7);

    printf("DEVELOPER-Mayank");

    gotoxy(20, 10);
    printf("1.... CREATE A BANK ACCOUNT");

    gotoxy(20, 12);
    printf("2.... ALREADY A USER? SIGN IN");

    gotoxy(20, 14);
    printf("3.... EXITn\n\n");

    printf("\n\nENTER YOUR CHOICE..");

    scanf("%d", &choice);
}