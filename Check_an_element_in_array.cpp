#include<iostream>
using namespace std;
int main()
{
    int a[10]={11,12,0,2,3,13,14,9,-2},num,found_at=0,i;
    cout<<"Enter the element that you want to search : ";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {found_at=i+1;}
    }
    if(found_at!=0)
    {cout<<"Number found in the array at "<<found_at<<" position"<<endl;}
    else
    {cout<<"Item not found in the array";}
}