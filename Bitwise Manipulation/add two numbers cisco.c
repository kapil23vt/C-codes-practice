#include<stdio.h>

int Add(int x, int y) //10, 11
{
    // Iterate till there is no carry
    while (y != 0)//y = 11, 100
    {
        // carry now contains common set bits of x and y
        int carry = x & y; // carry = 10, 001&100 = 000

        // Sum of bits of x and y where at least one of the bits is not set
        x = x ^ y; // x = 01, x = 001 ^ 100 = 101

        // Carry is shifted by one so that adding it to x gives the required sum
        y = carry << 1; // y = 100, 000
    }
    return x;
}

int anotheradd(int x, int y)
{
    if (y == 0)
        return x;

    int sum, carry;

    sum = x^y;
    carry = (x&y) << 1;
    return anotheradd(sum, carry);
}

int Sub(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // borrow contains common set bits of y and unset
        // bits of x
        int borrow = (~x) & y;

        // Subtraction of bits of x and y where at least
        // one of the bits is not set
        x = x ^ y;

        // Borrow is shifted by one so that subtracting it from
        // x gives the required sum
        y = borrow << 1;
    }
    return x;
}

int anothersub(int x, int y)
{
    if (y == 0)
        return x;

    int sub, borrow;

    sub = x^y;
    borrow = (~x&y) << 1;
    return anothersub(sub, borrow);
}


int main()
{
    printf("%d", Add(2,3));
    printf("\n%d", anotheradd(12,3));
    printf("\n%d", Sub(32, 12));
    printf("\n%d", anothersub(32, 1));

    return 0;
}
