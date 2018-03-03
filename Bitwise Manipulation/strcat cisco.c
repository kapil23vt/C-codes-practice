#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "b");
   strcpy(dest, "a");

   strcat(dest, src);

   // dest = dest + src = //// ab

   printf("Final destination string : %s", dest);

   strcat(src, dest);

   // src = src + dest = //b + ab

   printf("\nFinal destination string : %s", src);

   return(0);
}
