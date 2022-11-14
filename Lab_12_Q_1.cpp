//Program to print 1 if the points above the straight line and 0 if below the straight line

#include<iostream>
using namespace std;

class point
{
    private:
    int x;
    int y;
    public:
    void getValue(int a,int b)
    {
        x=a;
        y=b;
    }

    int getvalX()
    {
        return x;
    }
    int getvalY()
    {
        return y;
    }
};

int main()
{
    int xn = 20;
    point A[xn][xn];
    const char* B[xn][xn];
    float m;
    cout<<"Enter the slope of the line : "; cin>>m;
    float c;
    cout<<"Enter the intercept of the line : "; cin>>c;

    for(int i = 0; i<xn; i++)
    {
        for(int j = 0; j<xn; j++)
        {
            A[j][i].getValue(i,xn-1-j);
        }
    }

    for(int i = 0; i<xn; i++)
    {
        for(int j = 0; j<xn; j++)
        {
            if((A[i][j].getvalY()-m*A[i][j].getvalX())-c>=0)
            B[i][j] = "1";            
            else
            B[i][j] = "0";
        }
    }

    for(int i = 0; i<xn; i++)
    {
        for(int j = 0; j<xn; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}