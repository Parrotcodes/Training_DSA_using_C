#include <stdio.h>
#include <stdbool.h>

bool isCheckAge(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int age = 0, result;

    printf("Enter your age to SIGN-UP:");
    scanf("%d", &age);

    if (isCheckAge(age))
    {
        printf("You can signup!");
    }
    else
    {
        printf("18+ age people can signup!");
    }
    return 0;
}