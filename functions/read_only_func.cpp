#include <iostream>

using namespace std;

void zero_array(int array[], size_t  t );

int main()
{
 int my_array []{1,2,3,4};

  zero_array(my_array, 4);

}

/*
    Read only function tech
*/
void zero_array ( const int array[], size_t size)
{
    for(int i{0}; i < size; i++)
    {
        cout << array[i]<<endl;
    }
/*
    We cannot pass const int array 
        to the zero_array, because we get a error due to const 
        zero_array is waiting for int *array and don't const int *array
*/
}
void zero_array ( int array[], size_t size)
{
    for(int i{0}; i < size; i++)
    {
        array[i] =  0 ;
        cout << array[i]<<endl;

    }

}