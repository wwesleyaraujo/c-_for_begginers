#include <iostream>

using namespace std;

int main()
{

    int scores [] {10,12,22};

    int i{0};

    int lenScore= sizeof(scores) / sizeof(scores[0]);
    while (i <lenScore )
    {
        cout << scores[i] << endl;

        i ++;
    }

    
}