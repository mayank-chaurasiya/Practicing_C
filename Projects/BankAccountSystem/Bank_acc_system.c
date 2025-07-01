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

    switch (choice)
    {
    case 1:
        system("cls");
        printf("\n\n USERNAME 50 CHARACTERS MAX!!");
        printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
        account();
        break;

    case 2:
        login();
        break;

    case 3:
        exit(0);
        break;

        getch();
    default:
        break;
    }
}

// Function to create accounts of users
void account(void)
{
    char password[20];
    int passwordLenght, i, seek = 0;
    char ch;
    FILE *fp, *fu;
    struct pass u1;
    struct userpass p1;
    struct userpass u2;

    // Opening File to write data of a user
    fp = fopen("username.txt", "ab");

    // inputs
    system("cls");
    printf("\n\n!!!!!CREATE ACCOUNT!!!!!");

    printf("\n\nFIRST NAME..");
    scanf("%s", &u1.fname);

    printf("\n\nLAST NAME..");
    scanf("%s", &u1.lname);

    printf("\n\nFATHER NAME..");
    scanf("%s", &u1.fathername);

    printf("\n\nMOTHER NAME..");
    scanf("%s", &u1.mothername);

    printf("\n\nADDRESS..");
    scanf("%s", &u1.address);

    printf("\n\nACCOUNT TYPE..");
    scanf("%s", &u1.typeaccount);

    printf("\n\nDATE OF BIRTH..");
    printf("\nDATE-");
    scanf("%d", &u1.date);
    printf("\nMONTH-");
    scanf("%d", &u1.month);
    printf("\nYEAR-");
    scanf("%d", &u1.year);

    printf("\n\nADHAR NUMBER");
    scanf("%s", u1.adharnum);

    printf("\n\nPHONE NUMBER");
    scanf("%s", u1.pnumber);

    printf("\n\nUSERNAME.. ");
    scanf("%s", &u1.username);

    printf("\n\nPASSWORD.. ");

    // Taking password in the form of stars
    for (i = 0; i < 50; i++)
    {
        ch = getch();
        if (ch != 13)
        {
            password[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        else
        {
            break;
        }
    }

    // writing to the file
    fwrite(&u1, sizeof(u1), 1, fp);

    // closing file
    fclose(fp);

    // Calling another function after successful creation of account
    accountcreated();
}

// Successful account creation
void accountcreated(void)
{
    int i;
    char ch;
    system("cls");
    printf("PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");
    for (i = 0; i < 20000000; i++)
    {
        i++;
        i--;
    }

    gotoxy(30, 10);

    printf("ACCOUNT CREATED SUCCESSFULLY....");
    gotoxy(0, 20);

    printf("Press enter to login");

    getch();
    login();
}