#include <stdio.h>

int main()
{
    char str[50] = {0};

    // Only first 4 characters will be read
    scanf("%4s", str);
    printf(str);
    getchar();
    return 0;
}
