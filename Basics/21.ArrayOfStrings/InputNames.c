#include <stdio.h>
#include <string.h>

int main()
{
    // EXCERSICE

    char names[3][25] = {0};
    int size = sizeof(names) / sizeof(names[0]);

    // input user names
    // printf("Enter your name: ");
    // scanf("%s", &names[0]);

    // printf("Enter your name: ");
    // fgets(names[0], sizeof(names[0]), stdin);
    // names[0][strlen(names[0]) - 1] = '\0';

    // printf("%s\n", names[0]);

    // input string user names
    for (int i = 0; i < size; i++)
    {
        printf("Enter your name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    // output names
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}