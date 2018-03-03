#include "stdlib.h"
int main()
{
 int *pInt;
 int **ppInt1;
 int **ppInt2;

 pInt = (int*)malloc(sizeof(int));
 ppInt1 = (int**)malloc(10*sizeof(int*));
 ppInt2 = (int**)malloc(10*sizeof(int*));

 free(pInt); // No compile error since you are passing pointer
 free(ppInt1); // Here you are again passing pointer
 free(ppInt2); // Same you are passing pointer again
 return 0;
}
