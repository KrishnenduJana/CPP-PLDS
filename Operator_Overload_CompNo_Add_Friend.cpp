//Program (3) : Define a class that read two complex no. then perform add, sub, mul and print it using Operator overloading (friend operator overloading)
#include<iostream>
using namespace std;

class Complex
{
	private:
		float Re;
		float Im;
	public:
		Complex ()		//Constructor
		{
			Re = 0;
			Im = 0;
		}
		void readComplex()
		{
			cout<<"Enter Re(z) : "; cin>>Re;
			cout<<"Enter Im(z) : "; cin>>Im;
		}
		void showComplex()
		{
			cout<<Re<<" + "<<Im<<"i";
		}
		
		friend Complex operator+(Complex z1, Complex z2);	//Operator using friend functions
};
Complex operator + (Complex z1, Complex z2)	//Operator Overloading (Overloading + ) it takes two argument
{
	Complex z3;
	z3.Re = z1.Re + z2.Re;
	z3.Im = z1.Im + z2.Im;
	return z3;					//Return the sum
}
int main()
{
	Complex z1,z2,z3;
	//First we read two complex numbers.
	cout<<"For 1st complex no : "<<endl;
	z1.readComplex();	
	cout<<"For 2nd complex no :"<<endl;
	z2.readComplex();	
	z3 = z1 + z2;
	cout<<"Add : "; z3.showComplex();	
	
}
