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

        // Inicialization list
        Player():  Player{"None",0,0}{  
            cout << "No args" <<endl;
        }
        Player(std::string name): Player{name,0,0} {
            cout<< "  1 arg"<<endl;
        }
        Player(std::string name, int health, int xp):name{name},health{health}, xp{xp}{
            cout << " three args"<<endl;
        }

    //Destructor
    ~Player(){
        cout << "Calling destructor"<<endl;
    }
};



#endif