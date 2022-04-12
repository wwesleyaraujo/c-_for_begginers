#include "Account.h"
#include <iostream>
using namespace std;

 
Account::Account( std::string name, double balance):name{name},balance{balance}{
    
}
 
bool Account::deposit(double am){
    if (am < 0) 
        return false;
    else {
        balance += am;
        return true;    
    }
}

bool Account::withdraw(double am ){
        
        if((this->balance - am )< 0){
            cout << "Insufficient funds" <<endl;
            return false;
        }
        else{
            this->balance -=am ;
            return true;
        }
}
double Account::getBalance() const{
            return balance;
}
Account::~Account(){
    cout<<"Account Destructor"<<endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"[Account: " << account.name << "] [Balance: " << account.balance <<"]";
}