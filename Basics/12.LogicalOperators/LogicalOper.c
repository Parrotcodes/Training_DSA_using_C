#include <stdio.h>
#include <stdbool.h>

// Logical Operators
// && - AND
// || - OR
//  ! - NOT

int main()
{
    int temp = 0;
    bool isSunny = true;

    // AND
    if (temp >= 0 && temp <= 30)
    {
        printf("Temperature is GOOD outside!.....");
    }
    else
    {
        printf("Temperature is Worst Outside!.....");
    }

    // OR
    if (temp <= 0 || temp >= 35)
    {
        printf("Temparature is Too BAD!");
    }
    else
    {
        printf("Temparture is GOOD!");
    }

    // NOT
    if (!isSunny)
    {
        printf("Is Cloudy outside");
    }
    else
    {
        printf("Is Sunny outside");
    }

    return 0;
}