#include <stdio.h>
#include <string.h>

// Mad Libs Game

int main()
{

    char adj[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";
    char noun[50] = "";
    char verb[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] = "\0";

    printf("Enter a noun (animal or person):");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = "\0";

    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = "\0";

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = "\0";

    printf("Enter an adjective (description): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = "\0";

    printf("\n Today I went to a %s zoo.\n", adj);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s.\n", noun, adj2, verb);
    printf("I was %s.\n", adj3);
    return 0;
}