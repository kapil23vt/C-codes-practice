#include <iostream>
using namespace std;

main()
{
    // Initialize the variables
    unsigned long a,b,c,d,base10IP;

    // Get the IP address from user
    cout << "\nEnter an IP address in dotted quad notation (x.x.x.x)";
    cout << "\nwith each section seperated by a space: ";
    cin >> a >> b >> c >> d;

    // Do calculations to convert IP to base 10
    a *= 16777216;
    b *= 65536;
    c *= 256;
    base10IP = a + b + c + d;

    // Output new IP address
    cout << "\nThe converted address is: " << base10IP << '\n';
   }
