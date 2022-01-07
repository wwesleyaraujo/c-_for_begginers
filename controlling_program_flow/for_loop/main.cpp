#include <iostream> 
#include <vector>

using namespace std;
int main(){

    int scores [] {100,90,80,20,40};

    for( auto score: scores)
    {
        cout << score<<endl;
    }

    vector<double> temps{10.9,11.2,12.1,0.0,10.1,90.2};
    double running_temp = 0.0;
    for(auto temp: temps)
    {
         running_temp += temp; 
    }

    double average = running_temp / temps.size();
   
   cout <<average<<endl;

   for (auto val: {1,2,21,10})
   {
       cout << val<< endl;
   }

   for (auto c: "This is a test !")
   {
       cout << c;
   }
   cout << endl;
}