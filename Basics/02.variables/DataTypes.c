#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 18;
    float height = 155.5;
    double random = 7980.88645757567;
    char gender = 'M';

    // string
    char name[] = "C programming!";
    char email[] = "demo@email.com";

    // boolean
    bool married = true;
    bool isOnline = false;

    printf("your age is %d.\n", age);
    printf("Your height is %.2f cm.\n", height);
    printf("Random number of double: %.15lf.\n", random);
    printf("Your gender is '%c'.\n", gender);
    printf("I'm learning %s.\n", name);
    printf("Your email is %s.\n", email);
    printf("Is your GF is Online -> %d.\n", isOnline);
    printf("Are you married? %d.\n", married);

    if (isOnline)
    {
        printf("Yes! you are online!.\n");
    }
    else
    {
        printf("No! your not in online!.\n");
    }

    // Formatspecifiers
    int id = 3456;
    float price = 78.99;
    double pi = 3.1445657567;
    char currency = '$';
    char product_bio[] = "It is very hygenic and organic food item..\n";

    printf("%d\n", id);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", product_bio);

    // width
    int rollno = 23;
    int num1 = 1;
    int num2 = 200;

    printf("%d\n", num1);
    printf("%d\n", rollno);
    printf("%d\n", num2);

    // precision
    float price1 = 19.990;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.1f\n", price1);
    printf("%.1f\n", price2);
    printf("%.1f\n", price3);

    return 0;
}