#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00f;
    bool isStuent = false;
    bool isSenior = false;

    // Student = $9 | Senior = $8 | Senior + Student = $7

    if (isSenior)
    {
        if (isStuent)
        {
            printf("\nYour a student, got '10%', Discournt");
            printf("\nYour a Senior, got 20%, Discount.");
            price *= 0.7;
        }
        else
        {
            printf("\n Your a Senior, got '20%', Disocunt.");
            price *= 0.8;
        }
    }
    else
    {
        if (isStuent)
        {
            printf("\nYour a Student, you got '10%', Discount.");
            price *= 0.9;
        }
        else
        {
            printf("NO one is there.");
            price = 0;
        }
    }

    printf("\nThe price of a Ticket is $%.2f", price);
    return 0;
}