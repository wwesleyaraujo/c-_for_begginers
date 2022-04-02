#include "Account.h"
#include <iostream>

Account::Account(/* args */)
{
}

Account::~Account()
{
}

void Account::deposit(double am){
    std::cout <<"Account deposit fcalled with "<<am<<std::endl;
}

void Account::withdraw(double am ){
        std::cout <<"Account withdraw called with "<<am<<std::endl;

}