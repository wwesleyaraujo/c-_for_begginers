#include <iostream>

using namespace std;

int add_numbers (int a, int b)
{
    return a+b;
}
double add_numbers(double a, double b)
{
    return a+b;
}
using namespace std;
int main()
{

    cout<< add_numbers(1.0,1.1)<<endl;
    cout<<add_numbers(2,2)<<endl;

}