#include<iostream>
using namespace std;
void swap2(int* a, int* b)
{
    int *temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 2;
    int b = 3;
    int *aptr = &a;
    int *bptr = &b;
    cout<<swap2(aptr,bptr);
}