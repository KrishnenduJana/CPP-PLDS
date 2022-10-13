//Increase the size of the array and initilize the element at the end of the array
#include<iostream>
using namespace std;
int main()
{
    int A[]={11,12,13,-11};
    for(int i = 0; i<4;i++)
    cout<<A[i]<<endl;

    int l = sizeof(A)/sizeof(A[0]);
    cout<<l<<endl;
    A[l] = 99;          //Initilaze at the end of the array with increase the size of the array
    l++;

    for(int i = 0; i<l;i++)
    cout<<A[i]<<endl;
}