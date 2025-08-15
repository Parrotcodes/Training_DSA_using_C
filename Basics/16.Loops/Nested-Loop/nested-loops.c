#include <stdio.h>

int main()
{
    // nested-forLoop
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}