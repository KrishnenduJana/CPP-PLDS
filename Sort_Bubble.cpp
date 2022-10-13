/*Link 1: Bubble Sort (With Code in Python/C++/Java/C) (programiz.com)
Link 2: Bubble sort algorithm(Time Complexity Discussed)
See ALso : OOP Book Lafore’s Book - 477 Page (Another Approach)

Algorithm:

bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort*/


// Bubble sort in C++

#include <bits/stdc++.h>
using namespace std;
//Function to read array
void readArray(int array[], int size)
{
    for(int i =0;  i< size; i++)
    cin>>array[i];
}

//Function to Print array
void printArray(int array[], int size)
{
    for(int i =0;  i< size; i++)
    cout<<array[i]<<" ";
    cout<<endl;
}

//Function for Bubble sort [Main Code]
//-------------------------------------------------------
void bubbleSort(int array[], int size)
{
    
    for ( int step = 0; step < size-1; step++)    //Total (n-1) step
    {
        for (int i = 0; i < (size - 1) - step; i++)		// for each step one comparison reduce like for pass 2 we sort 2 element in the last so we need less to comparison
        {
                                                        //Here we take (size -1) for A[i+1] terms
            if(array[i]>array[i+1])
            {
               swap(array[i],array[i+1]);	//There is built in function for swapping under bits/stdc++.h
            }
        }
    }
}
//------------------------------------------------------

int main()
{
    int data[100], n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements : ";
    readArray(data, n);
    cout<<"After sort the data is : ";
    printArray(data, n);
    bubbleSort(data, n);
    cout<<"Before sort the data is : ";
    printArray(data, n);
}