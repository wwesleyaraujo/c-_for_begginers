
#include <iostream>

#include  <vector>

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
        int getData() const{  //always should indicate const for methods dont modify the obj
            return *data;
        }
        Move( Move &&source)noexcept;
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
Move::Move( Move &&source)noexcept:data{source.data}{
      source.data = nullptr;
      std::cout << "Move constructor -  moving source "<< *data <<  std::endl;
}
int main(){
    const Move m1{10};

    // Erro because the method is accessing const obj and 
    // But, it ins't const method 
  //   cout<<m1.getData()<<endl;
  //  After change method for const : int getData() const , we can access 
      cout<<m1.getData()<<endl;
}