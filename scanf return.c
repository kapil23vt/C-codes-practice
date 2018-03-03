#include "stdio.h"
int main()
{
    char arr[100];
    int temp;
    // In C, scanf returns the no. of inputs it has successfully read

    printf("%d", scanf("%s %s", arr, &temp));
    // output = 2
    return 1;
}
