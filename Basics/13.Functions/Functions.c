#include <stdio.h>
#include <string.h>

// non return type (no parameter)
void HelloGreeting()
{
    printf("Hello, [name].\n");
}

// parameter
void HelloGreeting2(char name[])
{
    printf("Hello, %s.\n", name);
}

int main()
{
    char name[50] = "";

    // Reusability
    HelloGreeting();
    HelloGreeting();
    HelloGreeting();

    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    // passinga argum to fun
    HelloGreeting2(name);
    HelloGreeting2(name);
    HelloGreeting2(name);

    return 0;
}
