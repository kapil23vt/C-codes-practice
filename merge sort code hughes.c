#include<stdlib.h>
#include<stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;

    // left = 0, right = 4, mid = 2
    // arrayone = 3, arraytwo = 2

    // n1, n2 will be size of two arrays to be merged
    int arrayonesize = mid - left + 1;
    int arraytwosize =  right - mid;

    //Create two arrays Left and Right
    int L[arrayonesize], R[arraytwosize];

    // Get contents into left and right array
    // Left array will start from arr[left]
    for (i = 0; i < arrayonesize; i++) //arr[0], arr[1], arr[2]
        L[i] = arr[left + i];

    // Right array will start from arr[mid+1]
    for (j = 0; j < arraytwosize; j++) // arr[3], arr[4]
        R[j] = arr[mid + 1+ j];

    // Merge Routine
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left;// Initial index of merged subarray

    //Start traversing through both the arrays
    //Compare elements one by one
    //Add smaller element into the SAME array starting from index 0
    //Compare elements of left and right array
    while (i < arrayonesize && j < arraytwosize)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // If one of the array exhausts, copy remaining elements of left and right array
    while (i < arrayonesize)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < arraytwosize)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left+right)/2;

        // Call mergeSort on left, right array and then call merge
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = {2,4,4,5,1,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    // Call merge sort with left and right index
    // left index = 0, right index = size - 1
    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    if (arr_size%2 == 0){
        // even
        int medianindex1 = (0 + arr_size -1)/2;
        int medianindex2 = medianindex1 + 1;
        int evenmedian = (arr[medianindex1] + arr[medianindex2])/2;
        printf("\nMedian of the array is %d", evenmedian);
    }
    else{
        int medianinex = (0 + arr_size -1)/2;
        printf("\nMedian of the array is %d", arr[medianinex]);

    }



    return 0;
}
