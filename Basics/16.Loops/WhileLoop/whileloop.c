#include <stdio.h>
#include <string.h>

int main()
{

    /*
    // continuous running till the condition become false
    while(true){
    //stmts
    }
    */

    //    Asking input number > 0
    int num = 0;     // num =1 loop skips (conditon becomes false)
    while (num <= 0) // >0 run until get the required input (password/input required fromats)
    {
        printf("Enter the Number Greater than 0: ");
        scanf("%d", &num);
    }

    // Asking Input Name (!field can not be empty)
    char name[50] = "";
    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Name can not be Empty! Please, Enter Your Name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s", name);
    return 0;
}