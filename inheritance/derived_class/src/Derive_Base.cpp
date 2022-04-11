#include "Derive_Base.h"
#include "Base.h"
#include <iostream>
using namespace std;

Derive_Base::Derive_Base () : Base{}{
    cout << "Derive no args constructor"<<endl;
}

Derive_Base::Derive_Base (int x):
     Base{x},double_value{2*x}{
       cout<<"Derive int consturctor"<<endl;
}

Derive_Base::Derive_Base(const Derive_Base &other) : 
            Base(other), double_value{other.double_value}{
                 cout<<"Derive copy consturctor"<<endl;
}

Derive_Base &Derive_Base::operator=(const Derive_Base &other){
     cout<<"Derive operator="<<endl;
    if(this == &other){
        return *this;
    }
    this->double_value = other.double_value;
    return *this;
}