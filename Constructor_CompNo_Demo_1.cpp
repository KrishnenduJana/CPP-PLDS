//Demonstrate three types of constructor (For more See Abdul Bari - Udemy)
#include<iostream>
using namespace std;

class Complex
{
	private:
		float Re;
		float Im;
	public:
		/*Complex ()		//Constructor with no argument taken and it set value to 0 + 0i (Default Constructor)
		{
			Re = 0;
			Im = 0;
		}*/ // Hrer we can remove the default constructor
		Complex (float Real = 0,float Img = 0)	//Constructor with argument and set the value Real + Img i (Parameterized Constructor)
		{
			Re = Real;
			Im = Img;
		}
		Complex (Complex &z)		//Copy Constructor
		{					//Here we take reference (&) cause it
			Re =  z.Re;		//will not create another constructor
			Im = z.Im;			//cause this will make recursion
		}					//which will be a problem.
		void readComplex()
		{
			cout<<"Enter Re(z) : "; cin>>Re;
			cout<<"Enter Im(z) : "; cin>>Im;
		}
		void showComplex()
		{
			cout<<Re<<" + "<<Im<<"i";
		}
		
};
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
