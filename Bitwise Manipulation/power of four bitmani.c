#include<stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int num)
{
    int count = 0;
    int ithbit;
    while (num)
    {
        ithbit = num & 1;
        if (ithbit == 0){
            count++;
        }
        num = num >> 1;
    }
    if (count%2 == 0){
        return true;
    }
    else return false;

}

int main()
{
    int i = 16;
    printf("%d", isPowerOfFour(i));

    getchar();
    return 0;
}

