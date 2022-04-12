#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    private:
        // constexpr x const 
        // compile time initialized x  compile time or runtime initialized
        static constexpr const char *def_name = "Unnamed Account"; 
        static constexpr double def_balance = 0.0;
    protected:
        std::string name;
        double balance;
    public:
         
         //  Account(std::string name =  "Unnamed Account", double balance = 0.0)
         Account(std::string name = def_name, double balance = def_balance);
         
        
        bool deposit(double amount);
        bool withdraw(double amount);
        double getBalance() const;
        
        ~Account();
};



#endif