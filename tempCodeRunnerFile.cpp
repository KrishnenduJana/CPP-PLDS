#include <bits/stdc++.h>

using namespace std;

void readMatrix(float **arr, int row, int col);
void printMatrix(float **arr, int row, int col);
void bubbleRowSort(float **array, int row, int col);
void bubbleColSort(float **array, int row, int col);

int main()
{
	int row, col;
	cout<<"Enter the row and column (row col) : "; cin>>row>>col;

	float **array;

	
	for(int i = 0; i <row; i++)
    	array[i] = new float[col];
	
	
	cout<<"Randorow rowatrix :\n\n";
	readMatrix(array,row,col);

    cout<<"Random Matrix :"<<endl;
    printMatrix(array,row,col);
   
	bubbleRowSort(array,row,col);
    
    bubbleColSort(array, row, col);

    cout<<"Sorted Random Matrix :"<<endl;
	printMatrix(array,row,col);
}

//----------------------------------------------------

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



//Column sort using bubble sort

void bubbleColSort(float **A, int row, int col)
{
    for(int i = 0; i<row ;i++)
    {
        for ( int step = 0; step < col-1; step++)    //Total (n-1) step
        {
            for (int j = 0; j < (col - 1) - step; j++)		// for each step one corowparison reduce like for pass 2 we sort 2 elerowent in the last so we need less to corowparison
            {
                                                            //Here we take (col -1) for A[i+1] terrows
                if(A[i][j]>=A[i][j+1])
                {
                swap(A[i][j],A[i][j+1]);	//There is built in function for swapping under bits/stdc++.h
                }
            }
        }
    }
}

//Row sort using bubble sort

void bubbleRowSort(float **array, int row, int col)
{
    for(int j = 0; j<col ;j++)
    {
        for ( int step = 0; step < row-1; step++)    //Total (n-1) step
        {
            for (int i = 0; i < (row - 1) - step; i++)		// for each step one corowparison reduce like for pass 2 we sort 2 elerowent in the last so we need less to corowparison
            {
                                                            //Here we take (col -1) for A[i+1] terrows
                if(array[i][j]>=array[i+1][j])
                {
                swap(array[i][j],array[i+1][j]);	//There is built in function for swapping under bits/stdc++.h
                }
            }
        }
    }
}