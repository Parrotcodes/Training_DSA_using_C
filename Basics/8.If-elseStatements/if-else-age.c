#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65)
    {
        printf("your senior");
    }
    else if (age >= 18)
    {
        printf("Your an adult");
    }
    else if (age < 0)
    {
        printf("Your not born yet!");
    }
    else if (age == 0)
    {
        printf("Just now your born!");
    }
    else if (age < 18)
    {
        printf("your just a child!");
    }
    else
    {
        printf("Check your input, Try Again!");
    }

    return 0;
}