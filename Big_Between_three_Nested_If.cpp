// Big between three numbers (using nested if.. else..)
#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	if (n1>=n2)
	{
		 if(n1>=n3)
		 	cout<<n1<<" is the Biggest number."<<endl;
		 else
		 	cout<<n3<<" is the Biggest number."<<endl;
	}
	else
	{
		 if(n2>=n3)
		 	cout<<n2<<" is the Biggest number."<<endl;
	 else
	 		cout<<n3<<" is the Biggest number."<<endl;
	}
}