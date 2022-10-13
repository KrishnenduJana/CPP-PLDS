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
        Complex(Complex &z);
        void readComplex();
        void showComplex();
};

//main function -------------------------------
int main()
{
	Complex z1, z2(3,2), z3(z2);
	
	cout<<"\nPrint z1 (no argument given ) : ";
	z1.showComplex();		//Print 0 + 0i
	
	cout<<"\nPrint z2 (with 3 + 2i as argument) : ";
	z2.showComplex();		//Print 3 + 2i
	
	cout<<"\nPrint z3 (copy of z1) : ";
	z3.showComplex();		//Print 3 + 2i
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
Complex::Complex (Complex &z)		//Copy Constructor
{					//Here we take reference (&) cause it
    Re = z.Re;		//will not create another constructor
    Im = z.Im;			//cause this will make recursion
}					//which will be a problem.
void Complex::readComplex()
{
    cout<<"Enter Re(z) : "; cin>>Re;
    cout<<"Enter Im(z) : "; cin>>Im;
}
void Complex::showComplex()
{
    cout<<Re<<" + "<<Im<<"i";
}
//End of class functions -------------------------