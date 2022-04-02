#include <iostream>
#include "src/Account.h"
 

int main (int argc, char **argv){
    
    Account ac;
    ac.deposit(10);
 
    std::cout << "Bank version: " << BANK_VERSION<<std::endl;
    return 1;
 
}