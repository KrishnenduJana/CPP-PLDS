/* Here the main reason behind to create such a program is, how can we bypass a 2-D array in a function(Generally we cannot bypass an 2-D array to the function) */

#include <iostream>
using namespace std;
void readMatrix(float **arr, int m, int n)
{
	for(int i = 0; i<m;i++)
	{
		for(int j = 0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
}

void printMatrix(float **arr, int m, int n)
{
	for(int i = 0; i<m;i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}

void transposeMatrix(float **arr, int m, int n)
{
	float trans[n][m];
	for(int i = 0; i<n;i++)
	{
		for(int j = 0; j<m; j++)
		{
			trans[i][j] = arr[j][i];
		}
	}
	for(int i = 0; i<n;i++)
	{
		for(int j = 0; j<m; j++)
		{
			arr[i][j] = trans[i][j];
		}
	}
}

int main()
{
	int m, n;
	cout<<"Enter the size of the matrix (mxn) : "; cin>>m>>n;
	float **array;
	
	/* Link : https://stackoverflow.com/questions/12694214/initialize-a-float-array-on-construction Initialise of a float array on a construction */
	
	for(int i = 0; i <n; i++)
    	array[i] = new float[m];
	
	cout<<"Enter the elements of the matrix :\n";
	readMatrix(array,m,n);
	transposeMatrix(array,m,n);
	printMatrix(array,n,m);
}

/* For more details see Abdul Bari Sir Lecture No 82 in C++ */