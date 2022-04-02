#ifndef _SAVINGS_ACCOUNT_
#define _SAVINGS_ACCOUNT_
#include "Account.h"
class Savings_Account: public Account{

    public:
        double int_rate;
        Savings_Account();
        ~Savings_Account();
        void deposit(double am);
        void withdraw(double am);
};
#endif //_SAVINGS_ACCOUNT_