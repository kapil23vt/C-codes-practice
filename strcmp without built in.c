#include<stdio.h>

int main() {
   char str1[20] = "abc";
   char str2[20] = "abd";
   int i = 0;

   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;

    //first element equal, i becomes 1
    //second element equal, i becomes 2
    //so now check ith element, which is 3rd
    printf("%d",i);

    if(str1[i] == str2[i])
        printf("1");
    else if(str1[i] < str2[i])
        printf("-1");
    else
        printf("1");

  return (0);
}
