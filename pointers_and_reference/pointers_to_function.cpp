#include <iostream>
#include <string.h>


void change_name(std::string *p);

using namespace std;

int main()
{

    string name {"Wesley"};

    string* str_pt{&name};
    

    cout<<name<<endl;
    
    change_name(str_pt);

    cout<<name<<endl;
}

void change_name(string *p)
{
    *p = "Joao";
}