//Program to write a Function to calculate fibonacci sequences

#include <iostream>
using namespace std;
//Function to calculate fibonacci sequences
void Fib(int size)
{
    int t1=0, t2=1, nextTerm;
    for (int i = 1; i <= size; ++i)
	{
		cout<<t1<<"  ";
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
    
}

//Main function

int main()
{
	int n;
	cout<<"Enter the number of terms: ";
	cin>>n;
	Fib(n);
}
