#include "../lib/Player.h"
#include <iostream>

using namespace std;

int main(){


    Player* player = new Player("Joao", 10, 10);
    delete player;
}