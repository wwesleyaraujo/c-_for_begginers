#include "../lib/Player.h"
#include <iostream>

using namespace std;

int main(){

    // Objets created between {} aren't saw out of {}
    {
        Player* player = new Player("Joao");
        delete player;
    }
    {
        Player* player = new Player();
    }
    Player* player = new Player();
    delete player;
}