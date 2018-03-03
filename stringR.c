#include<stdio.h>
#include<conio.h>
void string_reverse1(char* string);

int main()
{
   int i, j, k;
   char str[100];
   char *rev;
   //printf("Enter a string\t");
   scanf("%s", str);
   //printf("\nThe original string is %s", str);
   string_reverse1(str);
   return 0;
}

void string_reverse1(char *string)
{
    int i, j;
    char temp;
    int length=strlen(string);
    for (i=0, j=length-1; i<=j; i++, j--)
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
    }
    printf("%s", string);

}
