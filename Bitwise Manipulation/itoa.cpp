#include <iostream>
using namespace std;

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

char* itoa(int num, char* str)
{
    int i = 0;
    bool isNegative = false;

    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    // num = 1567
    // rem = 7,6,5,1
    // str[0] = 7, str[1] = 6, str[2] = 5, str[3] = 1
    // at this point, string is 7651, you need to reverse it while returning
    while (num != 0)
    {
        int rem = num % 10;
        str[i++] = rem + '0';
        num = num/10;
    }
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; // Append string terminator
    reverse(str, i);
    return str;
}

int main()
{
    char str[100];
    cout << "Base:10 " << itoa(1567, str) << endl;
    cout << "Base:10 " << itoa(-1567, str) << endl;
    return 0;
}
