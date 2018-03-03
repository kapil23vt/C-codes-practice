//Fibonacci Series using Recursion
#include<stdio.h>

//int Fibonacci(int);

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}


int main()
{
   int numberofelements, iterator;
   int start = 1;

   scanf("%d",&numberofelements);

   printf("Fibonacci series\n");

   // Call Fibonacci for that many times
   for ( iterator = 1 ; iterator <= numberofelements ; iterator++ )
   {
      printf("%d\n", Fibonacci(start));
      start++;
   }
   return 0;
}

