#include <stdio.h>

int main()
{

    /*
    // continuous running till the condition become false
    while(true){
    //stmts
    }
    */
    int num = 1; // >0 but run atleast once
    do
    {
        printf("Enter the Number Greater than 0: ");
        scanf("%d", &num);
    } while (num <= 0);

    return 0;
}