//Program (3) : Define a class that read two complex no. then perform add, sub, mul and print it
#include<iostream>
using namespace std;
class complex
{
	private:
		float Re;
		float Im;
	public:
		void readComplex()
		{
			cout<<"Enter Re(z) : "; cin>>Re;
			cout<<"Enter Im(z) : "; cin>>Im;
		}
		void showComplex()
		{
			cout<<Re<<" + "<<Im<<"i";
		}
		void addComplex(complex z1, complex z2)
		{
			Re = z1.Re + z2.Re;
			Im = z1.Im + z2.Im;
		}
		void subComplex(complex z1, complex z2)		
		{
			Re = z1.Re - z2.Re;
			Im = z1.Im - z2.Im;
		}
		void mulComplex(complex z1, complex z2)
		{
			Re = z1.Re * z2.Re - z1.Im * z2.Im;
			Im = z1.Re * z2.Im + z1.Im * z2.Re;
		}		
};

int main()
{
	complex z1,z2,z3;
	//First we read two complex numbers.
	cout<<"For 1st complex no : "<<endl;
	z1.readComplex();
	
	cout<<"For 2nd complex no :"<<endl;
	z2.readComplex();
		
	z3.addComplex(z1,z2);	
	cout<<"The sum is : ";
	z3.showComplex();
	cout<<endl;
	
	z3.subComplex(z1,z2);
	cout<<"The difference is : ";
	z3.showComplex();
	cout<<endl;
	
	z3.mulComplex(z1,z2);
	cout<<"The multiplication is : ";
	z3.showComplex();
	cout<<endl;
}