#include<iostream>
using namespace std;
class Dist
{
    private:
    float feet;
    float inch;
    public:

    Dist (float f = 0,float i = 0) : feet(f),inch(i)
    {}      //Parameterized constructor with default constrctor

    void getDist()
    {
        cout<<"Enter feet : "; cin>>feet;
        cout<<"Enter inch : "; cin>>inch;        
    }
    void printDist()
    {
        cout<<feet<<" feet "<<inch<<" inch "<<endl;
    }

    Dist operator++(int)        //this (int) is for postfix operator x++
    {   
        Dist d;     
        d.feet  = ++feet;
        d.inch = ++inch;
        return d;
        
    }

    Dist operator++()        //postfix operator ++x
    {
        Dist d;
        d.feet  = feet++;
        d.inch = inch++;
        return d;
    }

};

int main()
{
    Dist d1,d2;
    d1.printDist();
    ++d1;               //Demo for postfix
    d1.printDist();
    d2 = d1++;               //For prefix
    d1.printDist();
    d1.printDist();

}