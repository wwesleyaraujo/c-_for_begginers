#include "../lib/Player.h"
#include "../lib/Shallow.h"
#include "../lib/Deep.h"
#include <iostream>

using namespace std;

int main(){

  Deep s1(100);

  cout<<"S1 id= "<< s1.getData()<<endl;  
  
  Deep s2 {s1};

  cout<<"Sw id= "<< s1.getData()<<endl;  

  s2.setData(10);

  return 0;
}