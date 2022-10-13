//Program (4) : Create a class of students with rank and name as object and then print
Help Link : https://www.geeksforgeeks.org/array-of-objects-in-c-with-examples/

#include<iostream>
using namespace std;
class student
{
	private:
		int rank;
		char name[10];		
	public:		
		void readStudent()
		{
			cout<<"\nEnter student rank : ";
			cin>>rank;
			cout<<"\nEnter student name : ";
			cin>>name;			
		}
		void showStudent()
		{
			cout<<rank<<"\t"<<name<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter the number of student : ";
	cin>>n;
	student list[n];
	
	//Read student details
	for(int i=0; i<n;i++)
	{
		cout<<"\nEnter "<<i+1<<" Student details:-"<<endl;
		list[i].readStudent();
	}
		
	//Display student details
	for(int j =0; j<n;j++)
	{
		list[j].showStudent();
	}	
}
