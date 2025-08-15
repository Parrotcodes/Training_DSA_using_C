#include <stdio.h>

// int result = 0; // global variable -- mostly 'avoid' using global var in C

int add(int x, int y)
{
    // local var -- diff scope with same var name
    int result = x + y;
    return result;
}

int main()
{
    int n1 = 5, n2 = 4;
    int result = 0; // local variable

    result = add(n1, n2);
    printf("Local var Result : %d", result);
    return 0;
}