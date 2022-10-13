/* Source : Insertion Sort (With Code in Python/C++/Java/C) (programiz.com)

Algorithm :


insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort */

//Insertion Sort

#include <iostream>
using namespace std;

//Function to read array
void readArray(int array[], int size)
{
    cout<<"Enter "<<size<<" elements for the array : ";
    for(int i=0; i<size;i++)
    cin>>array[i];
}

// Function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
//-----------------------------------------------------
void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = array[i];
        int j = i - 1;          //Shifting the index one left
        
        
        while (array[j]>x && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = x;
        
    }
}
//-------------------------------------------------------

// Driver code
int main()
{
    int data[100], n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    readArray(data, n);
    cout<<"Given array is :"<<endl;
    printArray(data, n);
    insertionSort(data, n);
    cout << "Sorted array in ascending order:"<<endl;
    printArray(data, n);
}
