#include <iostream>

using namespace std;
/*
    Using default arguments values for functions
*/
double  calc_cost(double base_cost, double tax_rate = 0.006, double shipping = 3.50);
double calc_cost (double base_cost, double tax_rate, double shipping )
{
    return base_cost+= (base_cost*tax_rate) + shipping;
}
int main(){

double cost{0};
cost = calc_cost(100.0, 0.01, 2.0);
cout << cost << endl;cost = calc_cost(100.0, 0.02);
cout << cost << endl;
cost = calc_cost(100.0);
cout << cost << endl;


}