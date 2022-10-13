/*Program for swap of two values by defining function using third variable */
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;		//Note that here int *a means a is a pointer variable of integer type.
  *a = *b;
  *b = temp;
}

int main()
{
    int a, b;
    cout<<"Enter the value of (a) : ";
    cin>>a;
    cout<<"Enter the value of (b) : ";
    cin>>b;
    
    cout<<"Value before swap : a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);      //using swap function
    cout<<"Value after swap : a = "<<a<<" and b = "<<b<<endl;
    
}