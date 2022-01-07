#include <iostream>

using namespace std;

int main()
{
   
    int *int_pt = new int;
    *int_pt = 100;

    cout<<*int_pt<<endl;


    // Deleting pointers
    delete int_pt;

    // Allocating memory for an array 

    int *int_array_pt {nullptr};

    int size{0};
    cin>>size;

    int_array_pt = new int[size];

    for (int i =0; i< size ; i++)
    {
        int_array_pt[i] = i;
        cout<<int_array_pt[i]<<endl;
    }
    // Deleting array memory allocated 
    delete [] int_array_pt;
}