#include <iostream>
#include <string> 
using namespace std;

int main()
{

    // L-values are values that can be modifyed the values if they aren't constants
    //         and are adressable 
    // Ex.: int x = 10

    int x = 10; // x is an l-value
    string name {"Joao"};


    // R-values are values that cannot be modifyed or addressable
    //      are in the right-hand side of an assignment expression
    //      A temporary which is intended to be non-modifiable
    int y = x+200; // x+200 is an r-value


}