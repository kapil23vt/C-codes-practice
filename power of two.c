#include<stdio.h>
#define bool int

bool isPowerOfTwo(int n)
{
  //Always write base case
  if (n == 0)
    return 0;
  while (n != 1)
  {
    //If number is odd, return false
    if (n%2 != 0)
      return 0;
    //If number is even, divide it by 2
    //n=12, nextloop n =6, nextloop n =3, odd ->return false
    n = n/2;
  }
  return 1;
}

/*Driver program to test above function*/
int main()
{
    bool answer = isPowerOfTwo(12);
    //
    if (answer)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
  return 0;
}
