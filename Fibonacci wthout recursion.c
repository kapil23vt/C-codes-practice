#include<stdio.h>

int main()
{
   int NumberOfElements, first = 0, second = 1, next, iterator;

   printf("Enter the number of terms\n");
   scanf("%d",&NumberOfElements);

   printf("First %d terms of Fibonacci series are : ",NumberOfElements);

   for ( iterator = 0 ; iterator < NumberOfElements ; iterator++ )
   {
      if ( iterator <= 1 )
         next = iterator;
      else
      {
          // first second next
          // next = first + second
          // first second next
          //       first second
          // therefore first = second, second = next
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }

   return 0;
}
