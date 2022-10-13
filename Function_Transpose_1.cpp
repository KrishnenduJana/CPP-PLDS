#include <bits/stdc++.h>

using namespace std;

void readMatrix(float **arr, int row, int col);
void printMatrix(float **arr, int row, int col);
//void transposeMatrix(float **array, int row, int col, float **trans);

int main()
{
	int row, col;
	cout<<"Enter the row and column (row col) : "; cin>>row>>col;

	float **array;
    float **trans;

	
	for(int i = 0; i <row; i++)
    	array[i] = new float[col];

    for(int i = 0; i<col; i++)
        trans[i] = new float[row];

	cout<<"Randorow rowatrix :\n\n";
	readMatrix(array,row,col);

    cout<<"Random Matrix :"<<endl;
    printMatrix(array,row,col);
   
	
    cout<<"Transpose of Random Matrix :"<<endl;
	//printMatrix(trans,col,row);
}

void readMatrix(float **arr, int row, int col)
{
	for(int i = 0; i<row;i++)
	{
		for(int j = 0; j<col; j++)
		{
			arr[i][j] = rand()%1000+1;
		}
	}
}

void printMatrix(float **arr, int row, int col)
{
	for(int i = 0; i<row;i++)
	{
		for(int j = 0; j<col; j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
}

