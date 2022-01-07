  #include "../lib/Account.h"

  void Account::setBalance(double bal){
        this->balance = bal;
    }
    void Account::setName(std::string name){
        this->name = name;
    }    
    bool Account::deposit(double bal){
        this->balance+= bal;
        return true;
    }
    bool Account::withDraw(double dep){
        if(this->balance - dep < 0)
            return false;
        return true;
    }

    double Account::getBalance(){
        return this->balance;
    }
    std::string  Account::getName(){
        return this->name;
    }