#include<iostream>
using namespace std;

int reversebyte(int number)
{
    //Set what is the number of bits in the binary number
    int reverse_num = 0, i, temp;
    int ORnumber;

    for (i = 0; i < 32; i++)
    {
        // look for one, if found place it accordingly
        // temp for 0011 will be = 1 1 0 0
        // then we create 1000, 0100 and OR them
        temp = (number & (1 << i));

        if(temp)
        {
            //Do OR since you are adding this number
            //1 << (3-i=0), = 1000
            //1 << (3-i=1), = 0100
            //When you do the OR, 1100
            ORnumber = (31-i);
            reverse_num |= 1 << ORnumber;

        }

    }

    return reverse_num;

}


int main()
{
    int num = 1048577;   //num = b3-b2-b1-b0

    //get 0-0-b1-b0

    int newbyte0 = 0x0000ffff;

    cout << newbyte0 << endl;


    int firstpart = newbyte0 & num;

    cout << firstpart << endl;

    //temp = 0-0-b3-b2


    int temp = num >> 16;

    cout << temp << endl;

    int reversed = reversebyte(temp);

    cout << reversed << endl;

    int answer = reversed | firstpart;

    cout << answer << endl;

    return 0;
}

