#include <stdio.h>

int main()
{
    double num1 = 0.00f;
    double num2 = 0.00f;
    char op = '\0';
    double result = 0.00f;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operand(+,-,*,/): ");
    scanf(" %c", &op);

    // Switch case
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) // nested-if
        {
            printf("you can't divide by zero.\n");
        }
        else
        {

            result = num1 / num2;
        }
        break;
    default:
        printf("Try Again! Choose correct operand (+,-,*,/).\n");
        break;
    }

    printf("Result : %.2lf", result);
    return 0;
}