/*Program for swap of two values by defining function without using third variable */

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  *a = *a + *b;
  *a = *a - *b;
  *b = *a - *b;
}

int main()
{
    int a, b;
    cout<<"Enter the value of (a) : ";
    cin>>a;
    cout<<"Enter the value of (b) : ";
    cin>>b;
    
    cout<<"Value before swap : a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);      //using swap
    cout<<"Value after swap : a = "<<a<<" and b = "<<b<<endl;
    
}