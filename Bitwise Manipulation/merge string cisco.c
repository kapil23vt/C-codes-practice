#include <stdio.h>
#include <string.h>

int main ()
{
  char str[80];
  strcpy (str,"a "); // str = a
  strcat (str,"e "); // str = a e
  strcat (str,"f"); // str = a e f
  strcat (str," g 5"); // str = a e f g 5
  puts (str);
  return 0;
}
