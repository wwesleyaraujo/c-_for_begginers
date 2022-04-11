

 #include <iostream>
#include "src/Account.h"
#include "src/Derive_Base.h"

int main (int argc, char **argv){
    
    Base b{100};
    Base b1{b};
    b = b1; 

    Derive_Base db{200};
    Derive_Base db1 {db};
    db = db1;
    std::cout << "Bank version: " << BANK_VERSION<<std::endl;
    return 1;
 
}