#include<iostream>
using namespace std;

// Driver code
int main()
{
    int num = 1;   //00000000 00000001

    int sixteenbitswap = (num>>8) | (num<<8);
    //This will be 1 followed by 00000001 0000000

    int newbyte0 = num>>24; //ff = b3 goes to b0
    int newbyte1 = num>>8;  //ff00 = b2 goes to b1
    int newbyte2 = num<<8;  //ff0000 = b1 goes to b2
    int newbyte3 = num<<24; //ff000000 = b0 goes to b3


    int thirtytwobitswap  = ((num>>24)&0xff) | // move byte 3 to byte 0
                            ((num<<8)&0xff0000) | // move byte 1 to byte 2
                            ((num>>8)&0xff00) | // move byte 2 to byte 1
                            ((num<<24)&0xff000000); //move byte 0 to byte 3

    // This will be b0-b1-b2-b3
    // 00000001 00000000 00000000 00000000

    cout << sixteenbitswap << endl;
    cout << thirtytwobitswap << endl;


    return 0;
}
