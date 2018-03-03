#include<iostream>
using namespace std;

int toggleKthBit(int n, int k)
{
    // 1 << 0 = 0001
    // 1 << 1 = 0010
    // 1 << 2 = 0100
    // 1 << 3 = 1000

    // x ^ 0 = x
    // x ^ 1 = ~x

    // So if we xor kth position with 1 we can toggle just that bit
    int answer = (n ^ (1 << k));
    return answer ;
}

// Driver code
int main()
{
    int n = 5, k = 0; // n = 101, k = 0, new = 100
    cout << toggleKthBit(5 , 0); // 5 = 0101, toggle = 0100
    cout << toggleKthBit(8 , 0); // 8 = 1000, toggle = 1001
    cout << toggleKthBit(8 , 3); // 8 = 1000, toggle = 0000


    return 0;
}
