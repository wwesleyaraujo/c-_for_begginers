

 #include <iostream>
#include "src/Savings_Account.h"
#include "src/Derive_Base.h"
using namespace std;
int main (int argc, char **argv){
    
    Account c1;
      cout << c1 << endl;
    Savings_Account s1;
    cout << s1 << endl;
    
    cout << "Bank version: " << BANK_VERSION<< endl;
    return 0;
 
}