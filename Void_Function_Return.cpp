// C++ code to demonstrate void()
// returning void()--In this program we see that void function can be returned

#include <iostream>
using namespace std;

// A sample void function
void work()
{
    cout << "The void function has returned a void() !!! \n";
}

// Driver void() returning void work()
void test()
{
    // Returning void function
    return work();
}

// Driver Code
int main()
{
    // Calling void function
    test();
    return 0;
}
