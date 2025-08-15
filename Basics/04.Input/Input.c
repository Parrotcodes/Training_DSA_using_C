#include <stdio.h>
#include <string.h>

int main()
{
    int age = 0;
    float grade = 0.0f;
    char gpa = 0;
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter you grade: ");
    scanf("%.2f", &grade);

    printf("Enter GPA: ");
    scanf("%c", &gpa);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = "\0";

    return 0;
}