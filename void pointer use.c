#include <stdio.h>
int main()
{
    int a = 10;
    void *p;

    *p = &a;
    printf("The value pointed by p is %d", *p);
    //This gives error because you cannot deference void pointer

    return 0;
}
