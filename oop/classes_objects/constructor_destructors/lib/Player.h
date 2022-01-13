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
        Player(const Player &player);
        Player(std::string name="None", int health=0, int xp=0);
        std::string toString();
        //Destructor
        ~Player(){
            cout << "Calling destructor"<<endl;
        }
    };

Player::Player(std::string name_val, int health_val, int xp_val) 
    :name{name_val}, health{health_val},xp{xp_val} {  
        cout << "All args" <<endl;
}
std::string Player::toString(){
      std::string str{(std::string)("name: ")};
      str=str+this->name;
      str = str+std::string("\n");
      str=str+(std::string)("Health: ");
      str=str +to_string(this->health);  
      str = str+std::string("\n");
      str=str+(std::string)("Xp: ");
      str=str +to_string(this->xp);
      return str;
}
Player::Player(const Player &player):name{player.name},health{player.health},xp{player.xp}{
    cout<<"Copying a constructor"<<endl;
}

#endif