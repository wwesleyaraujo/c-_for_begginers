#include <iostream>
using namespace  std;

class Base{
    public: 
        int a{0};
        void display(){ cout<<a<<"," << b <<","<<c<<endl;}
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base {
    // a will be public
    // b will be protected
    // c will be private 
    public:
        void access_base_members(){
            a  = 100 ; // OK
            b = 200;   // OK
            // c = 300; // NOT ACCESSIBLE
        }
};

int main (){

    Base base;
    base.a = 100; // Ok
    // base.b = 200; // COMPILE ERROS - ACCESS RIGHTS
    // base.c = 300;  // COMPILE ERROS - ACCESS RIGHTS
    base.display();

    Derived d ;
    d.a = 100;
    //d.b = 200;  // COMPILE ERROS - ACCESS RIGHTS
    //d.c = 300; // COMPILE ERROS - ACCESS RIGHTS
    cout<<"=========== Base members acess from derived objets"<<endl;
    return 0;
}