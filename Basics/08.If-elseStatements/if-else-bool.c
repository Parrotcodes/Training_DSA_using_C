#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isOnline = true;

    if (isOnline)
    {
        printf("You are in Online!");
    }
    else
    {
        printf("You are in offline!");
    }

    return 0;
}