#include <stdio.h>

int main()
{
    int row, col;
    char sym = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &row);

    printf("Enter the # of columns: ");
    scanf("%d", &col);

    printf("Enter a Symbol to Use: ");
    scanf(" %c", &sym);

    // Pattern
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%c ", sym);
        }
        printf("\n");
    }

    return 0;
}