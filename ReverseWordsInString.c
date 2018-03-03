#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    int i,j;
    puts("Enter the Text:");
    gets(text);

    //text = ab cd ef
    strrev(text);
    //text = fe dc ba

    //iterate from first to last location
    for(i=0;text[i]!='\0';i++)
    {
        //look for space or the last character
       if(text[i+1]==' ' || text[i+1]==NULL)
       {
           // Find space at (i+1)th character
           // Reverse i to 0 th location, just skip space part

           for(j=i;j>=0 && text[j]!=' ';j--)
           {
               printf("%c",text[j]);
           }
           // Done reversing? Just add a space!
           printf(" ");
      }
    }
    return 0;
}
