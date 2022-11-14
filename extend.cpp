#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int x,y,d;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int v[]={a,1,0};
    int u[]={b,0,1};
    int w[3];
    while(v[0]>0)
    {
        w[0]=u[0]-(((u[1])/(v[1])))*v[0];
        w[1]=u[1]-(((u[1])/(v[1])))*v[1];
        w[2]=u[2]-(((u[1])/(v[1])))*v[2];

        u[0]=v[0]; u[1]=v[1]; u[2]=v[2];
        v[0]=w[0]; v[1]=w[1]; v[2]=w[2];
    }
    cout<<u[0]<<"  "<<u[1]<<"  "<<u[2];
}