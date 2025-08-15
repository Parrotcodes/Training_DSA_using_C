#include <stdio.h>
#include <stdbool.h>

// also works for do-while loop
int main()
{
    bool isRunning = true;
    char Say = '\0';
    int score = 0;

    while (isRunning)
    {
        printf("Your playing a game.....\n");
        printf("\nWould you like to Continue game? (Y or N): ");
        scanf("%c", &Say);

        if (Say != 'Y' && Say != 'y')
        {
            isRunning = false;
        }

        // score++;
    }

    printf("\nYour exit the Game! \n Your final Score is %d\n", score);

    return 0;
}