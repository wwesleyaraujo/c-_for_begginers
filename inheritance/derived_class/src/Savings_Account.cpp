#include "Savings_Account.h"
#include <iostream> 
#include <string.h>

 
 Savings_Account::Savings_Account(  std::string name, double balance  , double int_rate )
  : Account(name,balance),int_rate{int_rate}{

}

bool Savings_Account::deposit(double am){
    am = am*(100 +int_rate)/100;
    return Account::deposit(am);
}

std::ostream &operator<<(std::ostream &os, Savings_Account &s_saccount){
    os<<"Name: ["<<s_saccount.name<< "] balance: [" <<s_saccount.balance << "| Interest rate: " <<s_saccount.int_rate;
     return os;
}
