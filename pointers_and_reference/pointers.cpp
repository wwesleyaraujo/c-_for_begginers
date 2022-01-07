#include <iostream>

using namespace std;

using namespace std;
int main()
{
     int num{0};

    cout <<"Num: "<< num <<endl;
    cout <<"Num address= "<<&num<<endl;
    cout<<"Size num= "<<sizeof(num)<<endl;
    cout<<" ------------------"<< endl;
    int *p;
    p = &num;
    *p = 10 ;
    p = nullptr;
    //cout<<"P Value = "<<*p<<endl;
    cout<<"P address pointed = "<<p<<" it same num address "<<endl;
    cout<<"size of p is: " <<sizeof(p)<<endl;



}