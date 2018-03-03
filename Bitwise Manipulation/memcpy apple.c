#include<stdio.h>
#include<string.h>

void myMemCpy(void *dest, void *src, size_t n)
{
   char *helper_src = (char *)src;
   char *helper_dest = (char *)dest;

   for (int i=0; i<n; i++)
       helper_dest[i] = helper_src[i];
}

int main()
{
   char csrc[] = "GeeksforGeeks";
   char cdest[100];
   myMemCpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);

   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   myMemCpy(idest, isrc,  sizeof(isrc));

   printf("\nCopied array is ");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   return 0;
}
