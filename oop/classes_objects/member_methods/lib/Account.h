#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>
class Account {
    private:
    // Atributes 
    std::string name{"Account"};
    double balance{0.0};

    public:
    //Methods
    void setBalance(double bal);
    void setName(std::string name);
    
    bool deposit(double);
    bool withDraw(double);

    double getBalance();
    std::string getName();
};

#endif