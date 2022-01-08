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

        // Overleoading Constructors
        Player(){
            cout << "No args";
        }
        Player(std::string name){
            this->name = name;
            cout<< "Passing name to constructor"<<endl;
        }
        Player(std::string name, int health, int xp){
            cout << "Passing all args"<<endl;
            this->name = name;
            this->health = health;
            this->xp = xp;
        }

    //Destructor
    ~Player(){
        cout << "Calling destructor"<<endl;
    }
};



#endif