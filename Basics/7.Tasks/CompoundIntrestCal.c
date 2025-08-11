#include <stdio.h>
#include <math.h>

// Compund intrest Calculator
int main()
{
    printf("---Compound Intrest Calculator-----");

    double pricipal = 0.0;
    double rate = 0.0;
    int tyears = 0;
    int compyear = 0;
    double total = 0.0;

    printf("Enter the Pricipal (P): ");
    scanf("%lf", &pricipal);

    printf("Enter the Intrest rate (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &tyears);

    printf("Enter the # times of compound per year(n): ");
    scanf("%d", &compyear);

    total = pricipal * (1 + rate / compyear, compyear * tyears);

    printf("After %d years, the total will be %.2lf.\n", tyears, total);
    return 0;
}