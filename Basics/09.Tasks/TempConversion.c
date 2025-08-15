#include <stdio.h>

int main()
{
    int choice = 0;
    float far = 0.0f;
    float cel = 0.0f;

    printf("\nTemparature Conversion Program");
    printf("\n1.C. Celisus to Farenheit \n2.F. Farenheit to Celsius");
    printf("\nEnter your Choice: (C or F)");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        // Temp in Celsius to F
        printf("Enter the Temp in Celsius: ");
        scanf("%f", &cel);
        // logic
        far = (cel * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Farenheit.", cel, far);
    }
    else if (choice == 'F' || choice == 'f')
    {
        // Temp in F to C
        printf("Enter the Temp in Farenheit: ");
        scanf("%f", &far);
        // logic
        cel = (far - 32) * 5 / 9;
        printf("%.1f Farenheit is equal to %.1f Celsius.", far, cel);
    }
    else
    {
        printf("\nChoose correct option!");
    }

    return 0;
}