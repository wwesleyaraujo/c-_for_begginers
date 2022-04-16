#include <iostream>

class A{
    public:
        virtual void something(){
            std::cout << " Do something" <<std::endl;
        }
        ~A();
};

class B : public A {
        public:
            virtual void something() final{
            std::cout << " Do something" <<std::endl;
        }
        ~B();
};

class C : public B {
    public:
        virtual void something() {
            std::cout << " Do something" <<std::endl;
        }
        ~C();
};

int main(){
    
}