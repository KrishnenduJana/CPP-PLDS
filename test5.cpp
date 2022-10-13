//Demonstrate of + and << operator (Insertion Operation)
#include<iostream>
using namespace std;

class Complex
{
	private:
		float Re;
		float Im;
	public:
		Complex (): Re(0), Im(0)		//Constructor
		{}
		void readComplex()
		{
			cout<<"Enter Re(z) : "; cin>>Re;
			cout<<"Enter Im(z) : "; cin>>Im;
		}
		friend ostream & operator << (ostream &out, Complex &z);	// For << operator
				
		friend Complex operator+(Complex z1, Complex z2);	//For + operator
};

ostream & operator << (ostream &out, Complex &z)		//Operator for << (print complex number)
{
	out<<z.Re<<" + "<<z.Im<<"i";
	return out;
}

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
	cout<<"Add : "; cout<<z3;
	
}
