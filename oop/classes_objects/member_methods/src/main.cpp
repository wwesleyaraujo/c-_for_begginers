#include <iostream>
#include <vector>
#include "../lib/Account.h"

using namespace std;

class Player{
    private:
    // attributes

    std::string name {"Player"};
    int health {100};
    int xp{3};

    public:
    // Methods
    void talk(std::string);
    bool is_dead();
};

int main(){


    Account *frank_account = new Account;

    frank_account->setName("FRANK");
    frank_account->setBalance(10.0);


}