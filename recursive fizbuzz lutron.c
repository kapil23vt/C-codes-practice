#include <stdio.h>

void fizbuzz(int start, int end)
{
    if((start%15)== 0)
        printf("number= %d FizzBuzz\n", start);
    else if((start%3)==0)
        printf("number= %d Fizz\n", start);
    else if((start%5)==0)
        printf("number= %d Buzz\n", start);
    else
        printf("number= %d\n",start);

    if (start < end)
    {
        fizbuzz(start+1, end);
    }

}

int main(void)
{
    fizbuzz(1,15);
    return 0;
}
