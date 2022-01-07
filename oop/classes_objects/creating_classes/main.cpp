#include <iostream>
#include <vector>

using namespace std;

class Player{
    public:
    std::string name {"Player"};
    int health {100};
    int xp{3};

    // Methods
    void talk(std::string);
    bool is_dead();
};

class Account {
    std::string name{"Account"};
    double balance{0.0};

    bool deposit(double);
    bool withDraw(double);


};
int main(){

    Player frank;
    frank.health = 200;
    frank.xp = 100;

    Player *enemy = new Player;
    enemy->health =100;
    (*enemy).health = 40;

}