#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "a-b-c-d-e";

    char *token = strtok(str, "-");
    printf("First token is %s\n", token);

    // Keep printing tokens while one of the delimiters present in str[].
    while (token != NULL)
    {
        printf("Tokens are %s\n", token);
        token = strtok(NULL, "-");
        printf("Next token is %s\n", token);
    }

    return 0;
}
