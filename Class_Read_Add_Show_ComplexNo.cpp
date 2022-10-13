//Program (2) : Define a class that read two complex no. then add and print it
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
		
};

int main()
{
	complex z1,z2,z3;
	//First we read two complex numbers.
	cout<<"For 1st complex no : "<<endl;
	z1.readComplex();
	
	cout<<"For 2nd complex no :"<<endl;
	z2.readComplex();
	
	//Now we add these complex numbers.
	z3.addComplex(z1,z2);	//Here this will calculate the sum and store in z3.
	
	//Print complex no z3
	cout<<"The sum is : ";
	z3.showComplex();
}