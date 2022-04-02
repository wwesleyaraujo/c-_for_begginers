#include <iostream>
#include "src/Account.h"
#include "src/Savings_Account.h"

int main (int argc, char **argv){
    
    Account ac;
    Savings_Account sc ;
    Account *p_ac {nullptr};
    p_ac = new Account();
    p_ac->deposit(50);
    delete p_ac;
    ac.deposit(10);
 
    sc.deposit(20);


    std::cout << "Bank version: " << BANK_VERSION<<std::endl;
    return 1;
 
}