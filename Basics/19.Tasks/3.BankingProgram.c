#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

void checkBalance(int balance);
int depostMoney();
int withdrawMoeny(int balance);

int main()
{
    // BANKING PROGRAM
    int choice;
    int balance = 0;
    printf("***********WELCOME TO MY BANK*************");

    do
    {
        printf("\nSelect an Option: \n1.Check Balance \n2.Deposit Money \n3.Withdraw Money \n4.Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += depostMoney();
            break;
        case 3:
            balance -= withdrawMoeny(balance);
            break;
        case 4:
            printf("*************** THANK YOU FOR USING OUR BANK***************");
            break;
        default:
            printf("\nInvalid Choice! Please Select 1 - 4:");
        }
    } while (choice != 4);

    return 0;
}

void checkBalance(int balance)
{
    printf("Your Current Balance amount : $%d", balance);
}

int depostMoney()
{
    int amount = 0;
    printf("\nEnter amount to Deposit: $");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("\nInvalid Amount! Try Again");
        return amount;
    }
    else
    {
        printf("\nAmount Despoited Successfully! $%d", amount);
        return amount;
    }

    return 0;
}

int withdrawMoeny(int balance)
{
    int amount = 0;
    printf("\nEnter amount to Deposit: $");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("\nInvalid Amount! Try Again");
        return 0;
    }
    else if (amount > balance)
    {
        printf("\nInsufficient Funds! Your balance amount is $%d", balance);
        return 0;
    }
    else
    {
        printf("\nAmount Withdrqw Successfully! $%d", amount);
        return amount;
    }
    return 0;
}