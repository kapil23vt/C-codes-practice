#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;*a = *b; *b = t;
}

int partition (int arr[], int low, int high)
{
    // pivot, assuming to be last element
    int pivot = arr[high];

    // Index of smaller element, starts from -1
    int wall = (low - 1);

    // trying to find location of pivot in whole array
    for (int current = low; current < high; current++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[current] <= pivot)
        {
            // Swap smaller and current element
            swap(&arr[current], &arr[wall+1]);

            // Move wall forward
            wall = wall + 1;
        }
    }

    // Correct pivot location = Wall + 1
    // Get the pivot to correct location
    swap(&arr[wall + 1], &arr[high]);

    return (wall + 1); // Return current location of pivot
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Get the partitioningIndex
        int partitioningIndex = partition(arr, low, high);

        // Use Divide and Conquer to sort elements to left and right
        // partitionIndex say = 4
        // do quicksort(low,3) and quicksort(5,high)
        quickSort(arr, low, partitioningIndex - 1);
        quickSort(arr, partitioningIndex + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {7,2,1,8,6,3,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Initial array: \n");
    printArray(arr, size);
    quickSort(arr, 0, size-1);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}
