#include <stdio.h>

int main()
{
    // Break -- break out of a loop (STOP)
    // Continure -- Skip current cycle of a loop and runs next cycle continously (SKIP)

    // Break
    printf("\n********* Break ************\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // STOP
        }

        printf("%d ", i);
    }

    // Continue
    printf("\n********* Continue ************\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // Skip 5
        }

        printf("%d ", i);
    }

    return 0;
}