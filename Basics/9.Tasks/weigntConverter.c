#include <stdio.h>

int main()
{
    int choice = 0;
    float pounds = 0.0f;
    float kg = 0.0f;

    printf("\nWeight Conversion Caluculator");
    printf("\n1.Kilograms to Pounds \n2.Pounds to Kilograms");
    printf("\nEnter your Choice: (1 or 2)");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // kg to pounds
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kg);

        pounds = kg * 2.20462;
        printf("%.2f Kg is equal to %.2f pounds.", kg, pounds);
    }
    else if (choice == 2)
    {
        // pounds to kg
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);

        kg = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kg.", pounds, kg);
    }
    else
    {
        printf("\nChoose correct option!");
    }

    return 0;
}