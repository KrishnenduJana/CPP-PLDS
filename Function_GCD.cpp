#include<iostream>
using namespace std;
int GCD(int a, int b)
{
    int gcd = min(a,b);
    while(gcd>0)
    {
        if(a%gcd == 0 && b%gcd == 0)
        break;

        gcd--;
    }
    return gcd;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : (a) and (b) "; cin>>a>>b;
    cout<<"G.C.D is = "<<GCD(a,b)<<endl;
    cout<<"L.C.M = "<<a*b/GCD(a,b)<<endl;
}