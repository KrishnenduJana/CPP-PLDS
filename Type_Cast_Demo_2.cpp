// C++ program to demonstrate
// explicit type casting

#include <iostream>
using namespace std;

int main()
{
	char x = 'A';

	// Explicit conversion from double to int
	int sum = (int)x + 1;       //Ascii A = 65 + 1 = 66
    char char2=(char)sum + 2;   //66 + 1 = 67 --> D

	cout << "Sum = " << sum<<endl;
    cout<<"Char 2 = "<<char2<<endl;

	return 0;
}