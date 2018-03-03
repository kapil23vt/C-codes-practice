#include <stdio.h>
int main()
{
  int x = 10, y = 5;

  // Code to swap 'x' (1010) and 'y' (0101)
  x = x ^ y;  // x now becomes 15 (1111)
  y = x ^ y;  // y becomes 10 (1010)
  x = x ^ y;  // x becomes 5 (0101)

  printf("After Swapping: x = %d, y = %d", x, y);

  int a = 9, b = 8;

  // Code to swap 'a' and 'b'
  a = a + b;  // a now becomes 17
  // now how to get 9 from 17?

  b = a - b;  // b comes 8

  //now how to get 9 from 17

  a = a - b;  // x becomes 5

  printf("After Swapping: a = %d, b = %d", a, b);

  return 0;
}
