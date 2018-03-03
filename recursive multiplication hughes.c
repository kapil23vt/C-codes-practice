#include<stdio.h>

// recursion, write base case
// to calc xy, we need to find relation of xy and x(y-1)
// xy = x(y-1) + x

int multiply(int x, int y)
{
   if(y == 0)
     return 0;

   /* Add x one by one */
   if(y > 0 ) //
     return (x + multiply(x, y-1)); // x + x*(y-1) = xy
     // 6*3 = 6 + 6*2 = 6 + 6 + 6*1 = 6 + 6 + 6 + 0

  /* the case where y is negative */
   if(y < 0 )
     return -multiply(x, -y); // effectively doing x*y with negative sign
}

int main()
{
  printf("\n %d", multiply(5, -11));
  getchar();
  return 0;
}
