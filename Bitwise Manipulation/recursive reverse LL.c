#include<stdio.h>
#include<string.h>
void main( )
{
char old[15] = “bagel”;
char newx[15] = “bowl of cereal”;
printf(“\nYesterday I ate a %s”, old);
strcpy(old, newx);
printf(“\nToday I ate a %s”, old);
}
