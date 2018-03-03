#include <stdio.h>

void func(void);

static int count = 5; /* global variable */

main() {

   while(count--) {
      func();
   }

   return 0;
}

void func( void ) {

    static int i = 10; /* local static variable */
    i++;

   printf("%d %d\n", i, count);
}
