#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    /* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char example1[50];
    char example2[50];

    /* Copy two strings into our data arrays */
    strcpy(example1, "a");
    strcpy(example2, "b");

    /* Compare the two strings provided */
    result = strcmp(example1, example2);

    printf("%d", result);

    return 0;
}
