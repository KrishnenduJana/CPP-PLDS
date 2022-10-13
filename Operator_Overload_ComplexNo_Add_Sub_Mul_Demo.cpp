//Program (3) : Define a class that read two complex no. then perform add, sub, mul and print it using Operator overloading
#include<iostream>
using namespace std;

class Complex
{
	private:
		float Re;
		float Im;
	public:
		Complex ()		//Constructer
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
		Complex operator+(Complex z2)	//Operator Overloading (Overloading + )
		{
			Complex z3;
			z3.Re = z2.Re + Re;
			z3.Im = z2.Im + Im;
			return z3;					//Return the sum
		}
		Complex operator - (Complex z2)		
		{
			Complex z3;
			z3.Re = Re - z2.Re;
			z3.Im = Im - z2.Im;
			return z3;
		}
		Complex operator * (Complex z2)
		{
			Complex z3;
			z3.Re = Re * z2.Re - Im * z2.Im;
			z3.Im = Re * z2.Im + Im * z2.Re;
			return z3;
		}		
};
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
	z3 = z1 - z2;
	cout<<"\nSub : "; z3.showComplex();
	z3 = z1 * z2;
	cout<<"\nMul : "; z3.showComplex();	
}