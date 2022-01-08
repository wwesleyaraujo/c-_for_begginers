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
        Player(): name{"None"}, health{0}, xp{0}{  
            cout << "No args";
        }
        Player(std::string name): name{name}, health{0}, xp{0}{
            cout<< "Passing name to constructor"<<endl;
        }
        Player(std::string name, int health, int xp):name{name},health{health}, xp{xp}{
            cout << "Passing all args"<<endl;
        }

    //Destructor
    ~Player(){
        cout << "Calling destructor"<<endl;
    }
};



#endif