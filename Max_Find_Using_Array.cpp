// Find maximum from n numbers using array(2nd Assignment 08.08.2022)
#include<iostream>
using namespace std;
int main()
{
	int array[100], maximum, size, c,location = 1; 
	cout<<"Enter the number of elements in array : ";
	cin>>size; 
	cout<<"Enter "<<size<<" integers"<<endl;
	for (c = 0; c < size; c++)
		cin>>array[c];
	maximum = array[0]; 
	for (c = 1; c < size; c++)
	{
		if (array[c] >= maximum)
		{
			maximum = array[c];
			location = c+1;
		}
	} 
	cout<<"Maximum element is present at location "<<location<<" and it's value is "<<maximum<<endl;
}