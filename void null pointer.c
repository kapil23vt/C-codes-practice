#include "stdio.h"
int main()
{
 void *a; // a is pointer to void

 a = (void*)0; // (void *)0 is basically NULL pointer

 printf("%lu",sizeof(a)); // each pointer holds some address and
 // size of every pointer is equal to sizeof(int)

 return 0; // output = 4

}
