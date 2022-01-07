#include <iostream>

using namespace std;

int main()
{

    int high_temperature{100};
    int low_temperature{50};
    int mid_temperature{75};
/* This declaration can't modify
   high_temperature value by pointer 
   Just can change pointer address pointed 
*/
    const int *int_pt{nullptr};

    int_pt=&high_temperature; 

//  ------------------------------ 
//  *int_pt = 800;   Don't allowed! We can change the pointed value in memory 
//--------------------------
                                                                                                                                                                                                    
                                                                                                                                                                                                                                      


/* This declaration can't modify
    int_pt2 pointed memory address 
   Just can change value  stored in address pointed.
*/
    int *const int_pt2{&low_temperature};


    *int_pt2= 300; // Allowed

//---------------------
// Don't allowed            
   // int_pt2=&high_temperature;

   const int *const int_pt3={&mid_temperature};

   // int_pt3 = &high_temperature;
    //*int_pt3 = 10;

}