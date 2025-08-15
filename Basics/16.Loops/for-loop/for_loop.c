#include <stdio.h>
#include <windows.h>

int main()
{
    // for loop runs limited amount of time (limited range value)
    printf("-----Original----------\n");
    // top-bottom
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    printf("-----Reverse----------\n");
    // bottomo-top
    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    printf("-----ODD Num----------\n");
    // Odd numbers
    for (int i = 1; i <= 5; i += 2)
    {
        printf("%d\n", i);
    }

    printf("-----Even Num----------\n");
    // Odd numbers
    for (int i = 0; i <= 5; i += 2)
    {
        printf("%d\n", i);
    }

    printf("----Counter starts------\n"); // using windows.h header file
    for (int i = 10; i >= 0; i--)
    {
        Sleep(1000); // sleep for 1sec
        printf("%d\n", i);
    }
    printf("************ HAPPY NEW YEAR ************\n");

    return 0;
}