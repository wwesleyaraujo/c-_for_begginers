#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>
#include <iostream>

using namespace std;
class Player{
    private:
        std::string name;
        int health;
        int xp;
    
    public:
        Player(std::string name="None", int health=0, int xp=0);

        //Destructor
        ~Player(){
            cout << "Calling destructor"<<endl;
        }
    };

Player::Player(std::string name_val, int health_val, int xp_val) 
    :name{name_val}, health{health_val},xp{xp_val} {  
        cout << "All args" <<endl;
}

#endif