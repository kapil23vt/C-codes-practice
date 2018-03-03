#include<bits/stdc++.h>
using namespace std;

bool isAlphabet(char x)
{
    return ( (x >= 'A' &&  x <= 'Z') ||
             (x >= 'a' &&  x <= 'z') );
}

void reverseString(char s[])
{
    // Initialize l and r
    int r = strlen(s) - 1, l = 0;

    //Till l meets r, travers from both ends
    while (l < r)
    {
        // ignore special characters
        if (!isAlphabet(s[l]))
            l++;

        if(!isAlphabet(s[r]))
            r--;

        else // if both s[l] and s[r] are alphabatical characters
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
}

int main()
{
    char s[] = "@kap$il@#";
    cout << "Input string: " << s << endl;
    reverseString(s);
    cout << "Output string: " << s << endl;
    return 0;
}
