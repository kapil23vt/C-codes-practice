#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100] = "xyzw";
    int len = strlen(str);
    int flag;
    for(int i = 0; i < len; i++)
        {
            // check x with yzwx
            flag = 0;
            for(int j = i+1; j < len; j++)
                {
                    if((str[i] == str[j]))
                    {
                        // Found x again, break out of loop
                        // Check for next element (y)
                        // next i+1 element will be selected, (Think!)
                        // now check y with zwx, here i = 1
                        // since not found, we have to return this index
                        // flag will remain 0, and and we return that i
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    {
                        printf("First non-repeating character is %c",str[i]);
                        break;
                    }
        }

        if (flag == 1)
            printf("Didn't find any non-repeating character");

    return 0;
}
