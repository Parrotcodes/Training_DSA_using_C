#include <stdio.h>
#include <string.h>

int main()
{
    //  QUIZ GAME

    printf("\n****** QUIZ GAME *********\n");

    char choice;
    printf("What is the largest planet in the universe? \n");
    printf("\nA.Jupiter \nB.Saturn \nC.Uranus \nD.Neptune");
    printf("\nEnter your choice: ");
    scanf("%c", &choice);
    printf("\nCORRECT!");

    printf("\nYour Score is 3 our of 4 points");
    return 0;
}