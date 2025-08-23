#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random(int min, int max)
{
    return (rand() % (max - min) + 1) + min;
}

int main()
{
    // always print one number
    printf("%d", rand());

    // Based on time it will chaning random number
    srand(time(NULL)); // seed number -- created by mathematical formula -- with this we can generate random numbers
    printf("\n%d", rand());
    printf("\n%d", RAND_MAX);

    // Our own range of Random Numbers
    int min = 10;
    int max = 50;
    // int myRandomVaribale = rand() % 2; // 0 or 1
    // int myRandomVaribale = rand() % 2 + 1;
    // int myRandomVaribale = (rand() % (max - min) + 1) + min;
    int myRandomVaribale1 = Random(1, 5);
    int myRandomVaribale2 = Random(10, 50);

    printf("\n%d \t%d", myRandomVaribale1, myRandomVaribale2);

    return 0;
}