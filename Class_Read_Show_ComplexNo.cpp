//Program (1): By defining a class that reads a complex no. and print it.
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
		
};

int main()
{
	complex z1,z2,z3;
	z1.readComplex();
	cout<<"Given complex number is : ";
	z1.showComplex();
}
