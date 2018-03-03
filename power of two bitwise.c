#include<stdio.h>
#define bool int

bool isPowerOfTwo (int x)
{
    bool check = x & (x-1);
    //if number = 4, 0100 then 4 & 3, 0100 & 0011 = 0000
    if (check == 0)
        return 1;
    else
        return 0;

}

int main()
{
  isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(17)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(16)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(2)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(18)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(1)? printf("Yes\n"): printf("No\n");
  return 0;
}
