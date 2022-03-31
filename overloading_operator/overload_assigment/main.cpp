#include <iostream>
#include "MyString.h"

int main(){
   MyString a{"Hello"};
   a = MyString{"Hola"};
   a = "Bonjour";
   return 0;
}