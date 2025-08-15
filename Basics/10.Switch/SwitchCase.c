#include <stdio.h>

int main()
{
    // DayOfWeek

    int day = 0;
    // char weekDay = '\0';

    printf("Enter the day of week (1-7) or (M,T,W,Th,F,S,Su): ");
    scanf("%d", &day);
    // scanf("%c", &weekDay);

    switch (day) // weekDay
    {
    case 1: //'M'
        printf("Monday......");
        break;
    case 2: //'T'
        printf("Tuesday......");
        break;
    case 3:
        printf("Wednesday......");
        break;
    case 4:
        printf("Thursday......");
        break;
    case 5:
        printf("Friday......");
        break;
    case 6:
        printf("Saturday......");
        break;
    case 7:
        printf("Sunday......");
        break;
    default:
        printf("Try Again! week day (1-7)");
        break;
    }
    return 0;
}