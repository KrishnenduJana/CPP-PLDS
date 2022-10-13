//Progarm (6) : (modified From Previous)Define array of objects of student (Name , Grade) then sort the data of array with respect to Grade and Show them rank wise
#include<iostream>
using namespace std;
class student
{
	private:
		char name[10];
		float grade;			//Here we didn’t make variable public
	public:
		int initGrade()		//Here we create a class function which
// return the rank
		{
			float s = grade;;
			return s;
		}
		void readStudent()
		{
			cout<<"\nStudent name : ";
			cin>>name;
			cout<<"\n"<<name<<" grade : ";
			cin>>grade;			
		}
		void showStudent()
		{
			cout<<name<<"\t\t"<<grade<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter the number of student : ";
	cin>>n;
	student list[n],temp;
	
	//Read student details
	for(int i=0; i<n;i++)
	{
		cout<<"\nEnter Student no. "<<i+1<<" details:-"<<endl;
		list[i].readStudent();
	}
	
	cout<<"Given details : -"<<endl;
	//Display student details
	for(int j =0; j<n;j++)
	{
		list[j].showStudent();
	}
	
    for ( int step = 0; step < n; step++)
    {
        for (int i = 0; i < n - step - 1; i++)		// Bubble Sort
        {
            if(list[i].initGrade()<list[i+1].initGrade())
            {
               temp = list[i];		//For swap
               list[i] = list[i+1];	//Here we can use built in function
               list[i+1] = temp;	//swap(lis[i],list[i+])
            }
        }
    }
	
	cout<<"After sort rank wise : -"<<endl;
	//Display student details
	for(int j =0; j<n;j++)
	{
		cout<<"Rank "<<j+1<<"\t";
		list[j].showStudent();
	}
}
