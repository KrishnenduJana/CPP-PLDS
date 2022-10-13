/* Program to read and print an array using functions */
#include <iostream>
using namespace std;

//Function to read array
void readArray(int array[], int size)
{
    cout<<"Enter " <<size<<" elements for the array :";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
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
//Main function
int main()
{
    int n, data[100];
    cout<<"Enter the size of the array : ";
    cin>>n;
    readArray(data,n);
    cout<<"The elements of the array are : ";
    printArray(data,n);
   
}