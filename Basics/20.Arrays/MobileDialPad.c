#include <stdio.h>

int main()
{
    char dialPad[][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'}};

    int size = sizeof(dialPad) / sizeof(dialPad[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            printf("%c ", dialPad[i][j]);
        }
        printf("\n");
    }

    return 0;
}