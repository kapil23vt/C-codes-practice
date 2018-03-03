#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 2, c = 3;
    int *arr = (int *)malloc(r * c * sizeof(int));

    int i, j, counter = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++counter;

    // *(arr) *(arr+1) *(arr+2)...... *(arr+5)

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));

   /* Code for further processing and free the
      dynamically allocated memory */

   return 0;
}
