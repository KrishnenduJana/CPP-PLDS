// Sum of array using Recursive
/*

Here    Sum(n) = Sum(n-1) + A[n] when n>=0
        Sum(n) = 0  when n<0

*/
#include<iostream>
using namespace std;
int sum(int A[], int n)
{
    if (n<0)
    return 0;
    else
    return sum(A,n-1) + A[n];
}
int main()
{
	int n;
    cout<<"Enter the size of the array : "; cin>>n;
    int A[n];
    cout<<"Enter the elements : ";
    
    for(int i =0; i<n; i++)
    cin>>A[i];
    int x;
    
    for(int i = 0; i<n; i++)
    {
        x = sum(A,i);
    }
    cout<<"Sum = "<<x<<endl;
}