# include <stdio.h>

struct Bank
{
    char Acc_holder_name[100];
    int Acc_No;
    int Date_of_Acc_opening;
    int Acc_Balance;
};

int main()
{
    struct Bank SBI[5];
    for(int i = 0; i < 2; i++)
    {
        printf("\n\nEnter the details for Account Holder %d:\n\n", i + 1);
        printf("Account Holder's name: ");
        scanf("%s", SBI[i].Acc_holder_name);
        printf("Enter Account Number : ");
        scanf("%d", &SBI[i].Acc_No);
        printf("Enter the Date of Account opening : ");
        scanf("%d", &SBI[i].Date_of_Acc_opening);
        printf("Enter the Account Balance: ");
        scanf("%d", &SBI[i].Acc_Balance);
    }

    printf("Showing the Data of Account Holders below-------\n\n");
    for(int i = 0; i < 2; i++)
    {
        printf("\n\nCustomer number %d\n\n", i + 1);
        printf("Account Holder's name: %s\n", SBI[i].Acc_holder_name);
        printf("Account Number: %d\n", SBI[i].Acc_No);
        printf("Date of Account opening: %d\n", SBI[i].Date_of_Acc_opening);
        printf("Account Balance %d\n", SBI[i].Acc_Balance);
    }
    return 0;
}