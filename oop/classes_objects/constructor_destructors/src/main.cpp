
#include <iostream>

#include  <vector>
#include "../lib/Player.h"
int Player::num_players  = 0 ;
void display_active_Players(){
    cout << "Active Players: " << Player::get_num_players() << endl;
}
using namespace std;


int main(){
    display_active_Players();
    Player obj1 {"Frank"};
    display_active_Players();
}