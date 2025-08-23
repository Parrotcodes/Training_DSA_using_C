#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes --> declaration for future use
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int compChoice);

int main()
{
    // ROCK PAPER SCISSORS --- GAME
    srand(time(NULL));
    printf("\n**********ROCK PAPER SCISSORS***********");
    int userChoice = getUserChoice();
    int compChoice = getComputerChoice();
    // printf("\n%d", compChoice);
    // printf("\n%d", userChoice);

    // userchoice cases
    switch (userChoice)
    {
    case 1:
        printf("User Choose ROCK\n");
        break;
    case 2:
        printf("User Choose PAPER\n");
        break;
    case 3:
        printf("User Choose SCISSORS\n");
        break;
    }

    // computer choice cases
    switch (compChoice)
    {
    case 1:
        printf("Computer Choose ROCK\n");
        break;
    case 2:
        printf("Computer Choose PAPER\n");
        break;
    case 3:
        printf("Computer Choose SCISSORS\n");
        break;
    }

    checkWinner(userChoice, compChoice);
    return 0;
}

int getComputerChoice()
{
    return (rand() % 3) + 1;
}

int getUserChoice()
{
    int choice = 0;
    do
    {
        printf("\nChoose Option: \n\t 1.Rock \n\t 2.Paper \n\t 3.Scissors");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int compChoice)
{
    if (userChoice == compChoice)
    {
        printf("It's TIE!\n");
    }
    else if ((userChoice == 1 && compChoice == 3) ||
             (userChoice == 2 && compChoice == 1) ||
             (userChoice == 3 && compChoice == 2))
    {
        printf("You WIN!\n");
    }
    else
    {
        printf("Computer WIN!");
    }
}

//