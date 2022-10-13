#include<iostream>
using namespace std;

int main()
{
    int A[]={11,12,13};
    int i = 0;
    A[++i] = ++i;
    cout<<"A[0] = "<<A[0]<<endl;
    cout<<"A[1] = "<<A[1]<<endl;
    cout<<"A[2] = "<<A[2]<<endl;
}