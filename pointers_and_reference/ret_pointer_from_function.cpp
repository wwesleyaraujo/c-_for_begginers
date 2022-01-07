#include <iostream>
#include <string.h>


int* largest_int(int *p1, int *p2);

using namespace std;

int main()
{
    int *p1 = new int;
    int *p2 = new int;
    *p1 = 10;
    *p2 = 5;
     cout << *largest_int(p1,p2)<<endl;
}

int* largest_int(int *p1, int *p2)
{
    if(*p1 >= *p2)
    {
        return p1;
    }else
    {
        return p2;
    }
}