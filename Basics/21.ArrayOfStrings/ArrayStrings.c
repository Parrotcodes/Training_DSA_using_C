#include <stdio.h>

int main()
{
    char fruits[][10] = {"Apple", "Banana", "Grapes"}; // [row][col]
    int rows = sizeof(fruits) / sizeof(fruits[0]);

    // loop through array of char
    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", fruits[i]);
    }

    // String Method -- replace (concept)
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 's';
    fruits[2][5] = 'G';

    printf("\n******After replace**********\n");
    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", fruits[i]);
    }
    return 0;
}