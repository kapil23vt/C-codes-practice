#include <stdio.h>
#include <math.h>

static void foo(int inputvar);

int main(void)
{
    int a = 5;
    foo(a);
    printf("%d", a);// << a;

    return 0;
}

void foo(int inputvar)
{

    int *x;
    x = &inputvar;
    *x = 10;
}
