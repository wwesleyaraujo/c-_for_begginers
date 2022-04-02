#include "Savings_Account.h"
#include <iostream> 
Savings_Account::Savings_Account():int_rate{0.2}{
   
}
Savings_Account::~Savings_Account(){

}
void Savings_Account::deposit(double am){
           std::cout <<"Account deposit called with "<<am<<std::endl;
}
void  Savings_Account::withdraw(double am){
    std::cout <<"Account withdraw called with "<<am<<std::endl;
}