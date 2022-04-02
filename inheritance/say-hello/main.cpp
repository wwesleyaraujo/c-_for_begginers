#include <iostream>
#include "Account.h"
 

int main (int argc, char *argv){
    
    Account ac;
    ac.deposit(10);
 
    std::cout << BANK_VERSION<<std::endl;
    return 1;
 
}