 #include "MyString.h"
 #include <iostream>
 #include <cstring>

  
/*No args constructor*/
MyString::MyString(/* args */):str{nullptr}{
    str = new char[1];
    *str='\0';
}
/*Overload constructor */
MyString::MyString( const char *s):str{nullptr} 
{
    if (s == nullptr){
        str = new char[1];
        *str='\0';
    }
    else{
        str = new char[std::strlen(s) +1];
        std::strcpy(str,s);
    }
    
}
/*Copy  constructor*/
MyString::MyString(const MyString &source):str{nullptr}{
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}
/*Destructor*/
 MyString::~MyString(){

 }

void MyString::display() const{
    std::cout<<this->get_length()<< ": " << this->str<< std::endl;
}
int MyString::get_length() const{
    return std::strlen(this->str);
}
const char *MyString::get_str() const{  
        return this->str;
}


MyString &MyString::operator=( const MyString &rhs){
    std::cout << "Copy assigment" <<std::endl;
    if(this == &rhs)
        return *this;
    delete [] this->str;
   
    this->str = new char[std::strlen(rhs.str)+ 1];
    std::strcpy(str, rhs.str);
    return *this;
}


MyString::MyString(  MyString &&source):str(source.str){
           source.str= nullptr;
           std::cout << "Move constructor used"<<std::endl;
 }

 MyString &MyString::operator=(  MyString &&rhs){
     std::cout << "Using move assigment: "<<std::endl;
     if ( this == &rhs){
         return *this;
     }
     delete [] str;
     this->str = rhs.str;
     rhs.str = nullptr;
     return *this;

 }