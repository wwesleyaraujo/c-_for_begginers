#include "Trust_Account.h"
#include <iostream>
#include "Savings_Account.h"


bool  Trust_Account::deposit(double amount) {
    if(amount >= bonus_threshold){
        amount+=bonus_amount;
        return Savings_Account::deposit(amount);
    }else{
         return Savings_Account::deposit(amount);
    }
}
bool  Trust_Account::withdraw(double amount) {
    if(count_withdraw < max_withdrawls && ( amount/(this->getBalance()) > max_widrawls_percent) )
    {
         count_withdraw++;
        return Savings_Account::withdraw(amount);
    }else{
        return false;
    }
     
}

 Trust_Account:: Trust_Account(std::string name , double balance,  double int_rate ): Savings_Account{name,balance,int_rate},num_withdrawls{0}
{
}

std::ostream &operator<<(std::ostream &os, Trust_Account &account){
    os<<"[Trust Account: "<<account.name<<" Balance: "<<account.balance<<" int_rate: "<<account.int_rate << "%withdrawls: " << account.num_withdrawls<<"]";
    return os;
}