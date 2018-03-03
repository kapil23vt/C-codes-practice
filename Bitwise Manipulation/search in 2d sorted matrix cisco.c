#include<stdio.h>

int search(int mat[4][4], int n, int x)
{
   int row = 0, col = n-1;  //set indexes for top right element
   while ( row < n && col >= 0 )
   {
      if ( mat[row][col] == x )
      {
         printf("Found at %d, %d", row, col);
         return 1;
      }
      if ( mat[row][col] > x )
        col--;
      else //  if mat[i][j] < x
        row++;
   }

   printf("n Element not found");
   return 0;  // if ( i==n || j== -1 )
}

// driver program to test above function
int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  search(mat, 4, 29);
  return 0;
}
