#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b[]={21,2,3,4};
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;  //Dereferencing    
    // aptr++;
    // cout<<*aptr ;
    // cout<<a<<endl;
    // cout<<b<<endl;    //address of b[0]

    // int *bptr = b;
    // cout<<*bptr<<" ";
    // bptr++;
    // cout<<*bptr<<endl;

    int **p = &aptr;
    cout<<p<<endl;      //&(&(a))
    cout<<*p<<endl;     //*(&(&(a))) = &(a)
    cout<<**p<<endl;    //*(*(&(&(a)))) = *(&(a)) = a
    
}