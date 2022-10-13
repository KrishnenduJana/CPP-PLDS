//Here we define class function using scope variable

#include<iostream>
using namespace std;
class complex
{
	private:
		float Re;
		float Im;
	public:
    void readComplex();
    void showComplex();
		
		
};

//Main function -------------------------
int main()
{
	complex z1,z2,z3;
	z1.readComplex();
	cout<<"Given complex number is : ";
	z1.showComplex();
}

//Class functions ------------------------

void complex :: readComplex()
{
    cout<<"Enter Re(z) : "; cin>>Re;
    cout<<"Enter Im(z) : "; cin>>Im;
}
void complex :: showComplex()
{
    cout<<Re<<" + "<<Im<<"i";
}