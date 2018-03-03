#include <stdio.h>
#include <string.h>

int main () {
   char src[20];
   char dest[20];

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "abcdef");
   printf("src now is %s\n", src);

   strncpy(dest, src, 3);
   printf("dest now is %s\n", dest);

   return(0);
}
