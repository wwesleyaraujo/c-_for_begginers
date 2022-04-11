#include "Base.h"
#include <iostream>
using namespace std;
Base::Base(){
          cout<<" Base no args Constructor "<<endl;

}
Base::Base(int x ):value{x}{
    cout<<"int Base constructor"<<endl;
}
Base::Base(const Base &b):value{b.value}{
      cout<<"Base copy constructor"<<endl;
}
Base::~Base()
{
      cout<<" Base Destructor "<<endl;
}
Base &Base::operator=(const Base &rhs)
{
    cout << "Base operator="<<endl;
    if(this == &rhs){
        return  *this;
    }
    value = rhs.value;
    return *this;
    
}