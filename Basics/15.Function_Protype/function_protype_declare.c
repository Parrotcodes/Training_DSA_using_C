#include <stdio.h>
#include <stdbool.h>

// function prototype declaration for future referce (must declare before main function)
void hello(char name[], int age);
bool ageCheck(int age);

int main()
{
    hello("Rakesh", 18);
}

// hello
void hello(char name[], int age)
{
    printf("Hello, %s\n", name);
    printf("Your age is %d\n", age);
}

// ageCheck -- develop in future if needed
