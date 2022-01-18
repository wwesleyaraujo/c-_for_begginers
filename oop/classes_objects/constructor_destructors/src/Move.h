#ifndef _MOVE_H
#define _MOVE_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Move{
    private:
        int *data;
    public:
        Move();
        Move(int);
        
        ~Move();

        Move(const Move &source);
        void setData(int  d){
            *data = d;
        }
        int getData(){
            return *data;
        }
};

Move::Move(int d){
     data = new int;
     *data = d;
       std::cout << "Constructor for: " << d <<  std::endl;
}
Move::Move(): Move{0}{
      std::cout << "No args contructors" <<  std::endl;
}
Move::~Move(){
    if(data!=nullptr)
       std::cout << "Destructing freeing dta for : "<<*data<< std::endl;
     else 
          std::cout<< "Destruct freeing data for nullptr" <<   std::endl;
    delete data;

}
Move::Move(const Move &source):Move{*source.data}{
      std::cout << "Copy constructor - deep copy for "<< *data <<  std::endl;
}
#endif