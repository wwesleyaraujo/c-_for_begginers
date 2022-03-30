#include <iostream>
#include "MyString.h"

int main(){
    MyString empty;
    MyString larry {"larry"};
    MyString julia {larry};

    empty.display();
    larry.display();
    julia.display();
    return 0;
}