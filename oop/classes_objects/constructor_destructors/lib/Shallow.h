
#ifndef _SHALLOW_H
#define _SHALLOW_H

#include <string>
#include <iostream>

using namespace std;
class Shallow{
    private:
        int *id;

    public:
        Shallow(int id);
        Shallow( const Shallow &shallow);
        int getId();
        void setId(int id);
    ~Shallow();
};

Shallow::~Shallow(){
    delete id;
    cout << "Destructing Shallow"<<endl;
}

Shallow::Shallow(int iD) {
     this->id = new int;
     *this->id = iD;
     cout << "Creating shallow 1 arg"<<endl;
}
Shallow::Shallow(  Shallow  const &shallow):id{shallow.id}{
        cout<<"Creating by shallow copie"<<endl;
}

int Shallow::getId(){
    return  *this->id;
}

void Shallow::setId(int data){
   *this->id = data;
}

#endif