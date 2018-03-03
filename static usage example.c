#include <stdio.h>

void staticDemo()
{
  static int i;
  {
    static int i = 1;
    printf("%d ", i);
    i++;
  }
  printf("%d\n", i);
  i++;
}

int main()
{
  staticDemo(); //in first call, outer i created(0)
  staticDemo(); //in second call, outer i incremented
}
