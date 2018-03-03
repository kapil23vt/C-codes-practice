#include <stdio.h>
#include <string.h>   // required for strlen()

int main(void) {

    char *p1, *p2;    // declare two char pointer

    char *s = "abc...xyz";  // this is our string

    int sl = strlen(s);   // returns the length of the string, requires string.h

    p1 = s;             // p1 points to the first letter of s
    p2 = s+sl-1;        // p2 points to the last letter of s, -1 because of \0

    printf("%c\n", *p1);   // prints the first letter

    printf("%c\n", *p2);   // prints the last letter

    return 0;
}
