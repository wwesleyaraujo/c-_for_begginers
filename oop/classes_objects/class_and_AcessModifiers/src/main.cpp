#include <iostream>
#include <vector>

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

class Account {
    private:
    std::string name{"Account"};
    double balance{0.0};

    public:
    bool deposit(double);
    bool withDraw(double);


};
int main(){



}