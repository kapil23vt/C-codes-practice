#include <stdio.h>
#include <string.h>   // required for strlen()

int main(void) {

    int *p = "abcdefghijklmnopqrstuvwxyz";  // this is our string

    // p points to a
    // one char = 1 byte
    // pointer p is int, therefore stores 4 bytes
    // so if first pointer points to first, second pointer will point to location after 4 bytes

    printf("%c\n", *p);   // prints the first letter

    printf("%c\n", *(++p));   // prints the fifth letter

    printf("%c\n", *(++p));   // prints the ninth letter

    printf("%c\n", *(++p));   // prints the 13th letter

    return 0;
}
