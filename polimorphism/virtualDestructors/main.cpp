#include <iostream>

class Account {
    public:
        virtual void withdraw(double amount){
            std::cout<<"Account::withdraw"<<std::endl;
        }
        virtual ~Account(){
            std::cout<<"Account desctrutor"<<std::endl;
        }
};

class Checking : public Account {
    public:
        virtual void withdraw(double amount){
            std::cout<<"Checking::withdraw"<<std::endl;
        }
        virtual ~Checking(){
            std::cout<<"Checking desctrutor"<<std::endl;
        }
};

class Savings: public Account {
    public:
        virtual void withdraw(double amount){
            std::cout<<"Savings::withdraw"<<std::endl;
        }
        virtual ~Savings(){
            std::cout<<"Savings desctrutor"<<std::endl;
        }
};
class Trust: public Account {
    public:
       virtual void withdraw(double amount){
            std::cout<<"Trust::withdraw"<<std::endl;
        }
        virtual ~Trust(){
            std::cout<<"Trust desctrutor"<<std::endl;
        }
};

int main(){
    std::cout<<"\n================== Pointers ================"<<std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(10);
    p4->withdraw(1);
    std::cout<<"\n================== Clean up ================"<<std::endl;
    delete p1;
    delete p2; 
    delete p3;
    delete p4;
}