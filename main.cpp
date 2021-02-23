#include <iostream>
#include "first.h"

using namespace std;

int main()
{

                                                    /*
Remembering the terms signed and unsigned

New programmers sometimes get signed and unsigned mixed up. 
The following is a simple way to remember the difference: in 
order to differentiate negative numbers from positive ones, 
we use a negative sign. If a sign is not provided, we assume a 
number is positive. Consequently, an integer with a sign 
(a signed integer) can tell the difference between positive and 
negative. An integer without a sign (an unsigned integer) assumes 
all values are positive.
                                                 */

    cout << "Hello World!" << '\n' << endl;

    unsigned short x{ 65535 }; //largest 16-bit unsigned value possible
    cout << "x was: " << x << '\n' << endl;

    x = 65536; //65536 is out of our range, so we get  wrap-around
    cout << "x is now: " << x << '\n' << endl;

    x = 65537; //65537 is out of our range, so we get wrap-around
    cout << "x is now: " << x << '\n' << endl;

    //-----------------------------------------------------------

    unsigned short y{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "y was: " << y << '\n';
 
    y = -1; // -1 is out of our range, so we get wrap-around
    std::cout << "y is now: " << y << '\n';
 
    y = -2; // -2 is out of our range, so we get wrap-around
    std::cout << "y is now: " << y << '\n' << endl;

    //---------------------------------------------------------------

    unsigned int x1{ 3 };
    unsigned int y1{ 5 };
    cout << x1 - y1 << '\n' << endl;

    //--------------------------------------------------------

    doSomething(-1);

    return 0;
}