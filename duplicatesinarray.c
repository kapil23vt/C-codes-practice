    #include <stdio.h>
#include <stdlib.h>

//This only works for array example 1 to 100, 1to 10 in this case

void printRepeating(int arr[], int size)
{
  int i;
  printf("The repeating elements are: \n");
  for (i = 0; i < size; i++)
  {
      //check 7th position, if positive change sign
      //check 8th position, if positive change sign
      //check 8th position, since sign is changed, print it

    if (arr[abs(arr[i])] >= 0)
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    else
      printf(" %d ", abs(arr[i]));
  }
}

int main()
{
  int arr[] = {7,8,8,1,2,3,4,5,6};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
