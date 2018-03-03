#include <stdio.h>
void helper(int b)
{
    printf("Twice of given number is = %d", 2*b);
}

int main()
{
    // a is pointer to void function helper
    // helper functions need int input
    void (*a) (int) = helper;

    a(10.5); //Call fun by using pointer and input value

    return 0;
}
