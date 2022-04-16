#include <iostream>

class Base{
    public:
        virtual void say_hello() const{
            std::cout <<"hello - I'm a base class"<<std::endl;
        }
};

class Derived : public Base{
    public:
        void say_hello() const{
            std::cout <<"hello - I'm a derived class object"<<std::endl;
        }
};

void greetings( const Base &obj){
    std::cout << "Greetings"<<std::endl;
    obj.say_hello();
}
int main(){ 
    
    Base b;
    Derived d;
    greetings(b);
    greetings(d);

    Base *ptr = new  Derived;
    ptr->say_hello();
    return 0;
}