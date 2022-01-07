#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person p{1,"ana"};
    cout << p.getAge()<<" ,"<< p.getName()<<endl;

}