#include<bits/stdc++.h>
using namespace std;

void subString(char str[], int length)
{
    for (int start = 0; start < length; start++)
    {
        for (int endd = 0; endd < (length - start); endd++)
        {
            // start = 0, endd = 0,1,2, start+endd = 0,1,2
            // start = 1, endd = 0,1    start+endd = 1,2
            // start = 2, end = 0       start+endd = 2

            // temp = 0, 01, 012, 11, 12, 22
            for (int temp = start; temp <= endd+start; temp++)
                cout << str[temp];

            cout << endl;
        }
    }
}

int main()
{
    char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}
