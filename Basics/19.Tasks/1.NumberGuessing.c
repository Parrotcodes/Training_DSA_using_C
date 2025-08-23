#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // NUMBER GUESSING GAME
    int min = 1;
    int max = 100;
    int guess;
    int trials = 0;
    srand(time(NULL));
    int Answer = (rand() % (max - min) + 1) + min;

    printf("\n****** NUMBER GUESSING GAME **********\n");
    printf("%d", Answer);

    do
    {
        printf("\nGuess a Number between %d - %d: ", min, max);
        scanf("%d", &guess);
        trials++;
        // checking my guess number with randomly generated number
        if (Answer < guess)
        {
            printf("TOO HIGH!");
        }
        else if (Answer == guess)
        {
            printf("\nYes! You win!✨💕 \nThe Correct Answer is %d", guess);
            printf("\nYour Total Traials for Guessing Number: %d", trials);
        }
        else
        {
            printf("TOO LOW");
        }
    } while (guess != Answer); // Continues Loop - until matches myNumber with random Number

    return 0;
}