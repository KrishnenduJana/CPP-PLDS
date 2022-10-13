#include <iostream>
using namespace std;

int main()
{
    int i = 10;

    while (i < 10)                  //First check the condition then execute --> While loop
    {        
        cout << "While"<<endl;
    }

    int j = 10;
    do
    {     
        cout << "Do While"<<endl;
    } while (j < 10);               //First execute then check the condition --> Do while loop

    return 0;
}

