#include <stdio.h>
#include <stdbool.h>

double MAX(double x, double y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

double MIN(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    double n1 = 10.5, n2 = 34, result;
    printf("Enter two number to check max value: ");
    // scanf("%lf%lf", &n1, &n2);

    result = MAX(n1, n2);
    // result = MIN(n1, n2);
    printf("\nThe MAX Value is %.2lf", result);

    return 0;
}