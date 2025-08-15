#include <stdio.h>

double add(double x, double y)
{
    return x + y;
}

double square(double x)
{
    return x * x;
}

int main()
{
    double n1, n2, sum, s;
    printf("Enter two numbers to add: ");
    scanf("%lf%lf", &n1, &n2);

    sum = add(n1, n2);
    printf("The sum of %.2lf + %.2lf is %.2lf.\n", n1, n2, sum);

    s = square(n1);
    printf("The Square of %.2lf * %.2lf is %.2lf.\n", n1, n1, s);

    s = square(n2);
    printf("The Square of %.2lf * %.2lf is %.2lf.\n", n2, n2, s);
    return 0;
}