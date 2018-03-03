#include <stdio.h>
#define R 4
#define C 4

void spiralPrint(int rows, int cols, int a[R][C])
{
    int iterator;
    int x = 0, y = 0;

    /*  x - starting row index
        rows - ending row index
        y - starting column index
        col - ending column index
        i - iterator
    */

    // remember a[x][iterator] = a[x][0], a[x][1], a[x][2] = row
    while (x < rows && y < cols)
    {
        /* Print the first row from the remaining rows */
        for (iterator = y; iterator < cols; ++iterator)
        {
            printf("%d ", a[x][iterator]);
        }
        x++;

        /* Print the last column from the remaining columns */
        for (iterator = x; iterator < rows; ++iterator)
        {
            printf("%d ", a[iterator][cols-1]);
        }
        cols--;

        /* Print the last row from the remaining rows */
        if ( x < rows)
        {
            for (iterator = cols-1; iterator >= y; --iterator)
            {
                printf("%d ", a[rows-1][iterator]);
            }
            rows--;
        }

        /* Print the first column from the remaining columns */
        if (y < cols)
        {
            for (iterator = rows-1; iterator >= x; --iterator)
            {
                printf("%d ", a[iterator][y]);
            }
            y++;
        }
    }
}

int main()
{
    int a[R][C] = { {1,  2,  3,  4}, {5,  6,  7,  8}, {9,  10,  11,  12}, {13,  14,  15,  16}};

    spiralPrint(R, C, a);
    // void spiralPrint(int m, int n, int a[R][C])
    return 0;
}
