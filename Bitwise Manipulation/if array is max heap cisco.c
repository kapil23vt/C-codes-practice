#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool isHeap(int arr[],  int n)
{
    // Start from root and go till the last internal node
    // n = 8, i = 0 to i = 3
    // say you have 7 nodes
    // 1st node compared with 2nd and 3rd
    // 2nd node compared with 4th and 5th
    // 3rd node compared with 6th and 7th
    // for n = 7, 3 comparison
    // for n = 5, 2 comparisons, 1st node with 2nd and 3rd, 2nd node with 4th and 5th
    for (int i=0; i<(n-1)/2; i++)
    {
        // If left child is greater, return false
        // i = 0, comparing a[0] and a[1]
        // i = 1, comparing a[1] a[3]
        if (arr[i] < arr[2*i +1])
                return false;

        // If right child is greater, return false
        // i = 0, comparing a[0] and a[2]
        // i = 1, comparing a[1] and a[4]
        if (arr[i] < arr[2*i+2])
                return false;
    }
    return true;
}

// Driver program
int main()
{
    int arr[] = {14,13,12,11,10};
    int n = sizeof(arr) / sizeof(int);

    isHeap(arr, n)? printf("Yes"): printf("No");

    return 0;
}
