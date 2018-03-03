#include<stdio.h>
#include <iostream>
using namespace std;

void swap(int *address1, int *address2)
{
    int temp;
    temp = *address1;
    *address1 = *address2;
    *address2 = temp;
    return;
}

int main()
{
    int p = 1;
    int q = 2;
    cout << "address of p " << &p << endl;
    cout << "address of q " << &q << endl;

    swap(&p, &q);
    cout << "p = " << p << "q= " << q << endl;
    return 0;
}
