// Practice Question 60::::
//  Make a structure to store Bank Account information of a customer of ABC bank. Also, make an alias for it.

#include <stdio.h>

typedef struct BankAccountInformation
{
        char acc_holder[100];
        int acc_No;
        int pan_No;
        int aadhar;
        int phn_No;
} BAI;

int main()
{
        int i, n;

        BAI a[10];

        printf("No. of customers: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
                printf("\nEnter details of customers--\n");

                // Account holders name:
                printf("Enter name: ");
                scanf("%s", a[1].acc_holder);
                // Account number:
                printf("Enter Acc No. : ");
                scanf("%d", &a[i].acc_No);
                // Pan number:
                printf("Enter Pan No. : ");
                scanf("%d", &a[i].pan_No);
                // Aadhar:
                printf("Enter aadhar No. : ");
                scanf("%d", &a[i].aadhar);
                // Phone Number:
                printf("Enter Phone No. : ");
                scanf("%d", &a[i].phn_No);
        }

        printf("\nUNION BANK OF INDIA WELCOMES YOU!!\n");

        for (i = 0; i < n; i++)
        {
                printf("\nCustomer Details %d:\n", i + 1);

                printf("Account Holder : %s\n", a[i].acc_holder);
                printf("Account No. : %d\n", a[i].acc_No);
                printf("Pancard No. : %d\n", a[i].pan_No);
                printf("Aadhar No. : %d\n", a[i].aadhar);
                printf("Phone No. : %d\n", a[i].phn_No);
        }

        return 0;
}