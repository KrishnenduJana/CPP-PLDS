#include<iostream>
using namespace std;
void swap2(int* aptr, int* bptr)
{
    int temp = *aptr;   //store the value of a
    *aptr = *bptr;    //aptr store the address of 
    *bptr = temp;
}
int main()
{
    int a = 2;
    int b = 3;
    int *aptr = &a;
    int *bptr = &b;
    int *cptr = bptr;
    swap2(aptr,bptr);       //swap a = 3 and b = 2 that is now aptr store address of 3 and bptr store address of 2
    cout<<a<<" "<<b<<endl;
    cout<<*cptr;            // cptr store the address value of bptr and now bptr store the adress of integer 2 so it print 2
}