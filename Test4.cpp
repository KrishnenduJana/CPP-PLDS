//Demonstrate three types of constructor (For more See Abdul Bari - Udemy)
#include<iostream>
using namespace std;

class Complex
{
	private:
		float Re;
		float Im;
	public:
		Complex();
        Complex(float Real, float Img);
        void showComplex();
};

//main function -------------------------------
int main()
{
	Complex z1, z2(3,2);
	
	cout<<"\nPrint z1 (no argument given ) : ";
	z1.showComplex();		//Print 0 + 0i
	
	cout<<"\nPrint z2 (with 3 + 2i as argument) : ";
	z2.showComplex();		//Print 3 + 2i	
	
}
//End of main ----------------------------------

//Class functions -------------------------------
Complex::Complex ()		//Constructor with no argument taken and it set value to 0 + 0i (Default Constructor)
{
    Re = 20;            //for example, we set 20 + 30i by default
    Im = 30;
}

Complex::Complex (float Real, float Img)	//Constructor with argument and set the value Real + Img i (Parameterized Constructor)
{
    Re = Real;
    Im = Img;
}

void Complex::showComplex()
{
    cout<<Re<<" + "<<Im<<"i";
}
//End of class functions -------------------------