// Sum of an array using loop with time complexity O(n)
#include<iostream>
using namespace std;
int main()
{
	int n;
    cout<<"Enter the size of the array : "; cin>>n;
    int A[n];
    cout<<"Enter the elements : ";
    
    for(int i =0; i<n; i++)
    cin>>A[i];
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + A[i];
    }
    cout<<"Sum = "<<sum<<endl;
}