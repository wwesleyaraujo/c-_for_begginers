#include <iostream>
#include <string.h>


int* largest_int(int *p1, int *p2);

using namespace std;

int main()
{
    string name{"Wesley"};

    string &ref_name{name};

    ref_name="Joao";

    cout <<"Name: " <<name<<endl;
    cout <<"Ref_ame: " <<ref_name<<endl;
}