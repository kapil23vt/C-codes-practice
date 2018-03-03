#include <stdio.h>
#include <string.h>

int main () {
   char src[40];
   char dest1[100];
   char dest2[100];

   memset(dest1, '\0', sizeof(dest1));
   memset(dest2, '\0', sizeof(dest2));

   strcpy(src, "abcdef");
   strcpy(dest1, src);

   printf("dest1 now is %s\n", dest1);

   strncpy(dest2, src, 2);
   printf("dest2 now is %s\n", dest2);

   return(0);
}
