#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *string, int left, int right)
{
   int i;
   if (left == right)
     printf("%s\n", string);
   else
   {
       for (i = left; i <= right; i++)//(i=0,1,2)
       {
          swap((string+left), (string+i));// swap(string, string) swap(string, string+1) swap(string, string+2)
          permute(string, left+1, right);// calculate permutations from left+1 to right
          swap((string+left), (string+i)); //backtrack
       }
   }
}

int main()
{
    char str[] = "xyz";
    int n = strlen(str);
    permute(str, 0, n-1);//(str,0,2)
    return 0;
}
