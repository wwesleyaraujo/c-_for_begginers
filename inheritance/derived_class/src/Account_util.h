#ifndef _ACCOUNT_UTIL_H_ 
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// utility helper functions for Account class 
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account>, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for Saving Account class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account>, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);
#endif