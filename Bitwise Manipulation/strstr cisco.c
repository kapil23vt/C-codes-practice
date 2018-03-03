#include <string.h>
#include <stdio.h>

int main()
{
    // Take any two strings
    char haystack[] = "GeeksforGeeksfor";
    char needle[] = "for";
    char* p;

    // Find first occurence in haystack of needle
    p = strstr(haystack, needle);

    if (p) {
        printf("String found\n");
        printf("First occurrence of string is %s", p);
    } else
        printf("String not found\n");

    return 0;
}
