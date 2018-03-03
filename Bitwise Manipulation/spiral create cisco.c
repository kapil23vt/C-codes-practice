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
    int i = 0;
    int j = 0;
    int count = 1;

    int a[R][C];

    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            a[i][j] = count;
            count++;

        }

    }
    spiralPrint(R, C, a);

}

