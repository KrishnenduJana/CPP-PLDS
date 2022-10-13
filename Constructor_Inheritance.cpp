#include <iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        
        cout<<"Base default constructor created"<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Derived default constructor created"<<endl;
    }
};
int main()
{
    Derived x;
}

/* Here first Base class constructor created then Derived class constructor created */