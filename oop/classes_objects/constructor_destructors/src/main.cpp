#include "../lib/Player.h"
#include "../lib/Shallow.h"
#include <iostream>

using namespace std;

int main(){

  Shallow s1(100);

  cout<<"S1 id= "<< s1.getId()<<endl;  
  
  Shallow s2 {s1};

  cout<<"Sw id= "<< s1.getId()<<endl;  

  s2.setId(10);

  return 0;
}