// Program to calculate area and volume of the room by using Class

#include <iostream>
using namespace std;

// create a class
class Room
{
    public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

//main function
int main()
{

    // create object of Room class
    Room room1;
    
    cout<<"Enter the length of the room : ";
    cin>>room1.length;
    cout<<"Enter the breadth of the room : ";
    cin>>room1.breadth;
    cout<<"Enter the height of the room : ";
    cin>>room1.height;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}