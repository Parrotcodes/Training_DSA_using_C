#include <string.h>
#include <stdio.h>

int main()
{
    char name[50] = "";
    printf("Enter Your Name: ");

    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0)
    {
        printf("Empty field! Please Enter your name ");
    }
    else
    {
        printf("Hello, %s", name);
    }
    return 0;
}