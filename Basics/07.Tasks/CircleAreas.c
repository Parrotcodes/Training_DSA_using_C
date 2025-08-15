#include <stdio.h>
#include <math.h>

// Circle Areas Calculator
int main()
{
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14;
    double surfacearea = 0.0;
    double volume = 0.0;

    printf("Enter the radius of a Circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfacearea = 4 * PI * pow(radius, 2);
    volume = 4 / 3 * PI * pow(radius, 3);

    printf("Area: %.2lfcm.\n", area);
    printf("Surface Area: %.2lfcm.\n", surfacearea);
    printf("Volume: %.2lfcm.\n", volume);

    return 0;
}