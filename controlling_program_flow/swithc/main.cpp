#include <iostream> 

using namespace std;
int main(){

    cout << "Using swithc on number: "<< endl;
    cout<< "Type a number 0 or 1: "<<endl;
    int num{0};

    cin >> num;

    switch (num)
    {
    case 0:
        cout<< "Number  = 0"<<endl;
        break;
    case 1:
    cout<< "Number  > 0"<<endl;
        break;
    default:
    cout << "Number diferent 1 and 0"<<endl;
        break;
    }
}