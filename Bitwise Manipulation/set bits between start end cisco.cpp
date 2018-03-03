#include <iostream>
using namespace std;

int setbits(int start, int stop) {
    int answer = 0;
    int i;
    int ithbit = 0;
    while(start <= stop){
        answer = answer | (1 << start);
        start++;
    }

return answer;
}

int main()
{
    int start = 0;
    int stop = 3;
    cout << setbits(start, stop) << endl;

}


