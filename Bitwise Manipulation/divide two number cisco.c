#include <stdio.h>

int main(){
   int a,b,i=0;
   
   printf("Enter the dividend and divisor");
   scanf("%d%d",&a,&b);
   while(a>=b){
      a=a-b;
      i++;
   }

   printf("qoutient is :%d \n remainder : %d",i,a);
   
   return 0;
}
