#include <iostream>

class Printable{
    friend std::ostream &operator<<(std::ostream &os, const Printable &obj   );  
public:
    virtual void print(std::ostream &os) const  = 0 ;
};

std::ostream &operator<<(std::ostream &os, Printable &obj){
     obj.print(os);
     return os;
}
class Account : public Printable{
    public:
        virtual void withdraw(double amount){
            std::cout << "Account::withdraw"<<std::endl;
        }
        virtual void print(std::ostream &os) const override{
            os << "Account";
        }
        virtual ~Account(){}
};

class Cheking_Account : public Account {
    virtual void withdraw(double amount){
            std::cout << "Checking::withdraw"<<std::endl;
    }
    virtual void print(std::ostream &os) const override{
        os << " Checking";
    }
    virtual ~Cheking_Account(){}
};

int main(){
    Account *p = new Account();
    Cheking_Account *ca = new Cheking_Account();
    std::cout << *p << std::endl;
    std::cout << *ca << std::endl;
}