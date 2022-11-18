/*Source : Selection Sort (With Code in Python/C++/Java/C) (programiz.com)

Algorithm :

selectionSort(array, size)
    repeat (size - 1) times
        set the first index of unsorted element as the minimum element index
        for each of the unsorted elements
            if element < currentMinimum
            set element as new minimum
        swap minimum with first unsorted position
end selectionSort */

// Selection sort in C++

#include<bits/stdc++.h>
using namespace std;

//Function to read array
void readArray(int array[], int size)
{
    cout<<"Enter "<<size<<" elements for the array : ";
    for(int i=0; i<size;i++)
    cin>>array[i];
}


// function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
//----------------------------------------------------
//Function for Selection Sort
void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++) //Total (n-1) steps required
    {
        int min_idx = step;         //Set the first unsorted element as min
        for (int i = min_idx + 1; i < size; i++)   //Compare each element after (i+1) to (n-1)
        {
            if (array[min_idx] > array[i])
            min_idx = i;            //if above minimum satisfy then set the index as min index
        }        
        swap(array[min_idx], array[step]); // put min at the correct position = min idx
    }
}
//----------------------------------------------------

// driver code
int main()
{
    int data[100], n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    readArray(data, n);
    cout<<"Given array is :"<<endl;
    printArray(data, n);
    selectionSort(data, n);
    cout << "Sorted array in Ascending Order:\n";
    printArray(data, n);
}