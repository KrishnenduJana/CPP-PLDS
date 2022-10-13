//Increase the size of the array and initilize the element at the end of the array

#include<iostream>
using namespace std;
int main()
{
    int A[]={11,12,13,-11};
    int pos = 2;                //Here we want to enter the element at the index position 3
    cout<<"Given array : "<<endl;
    for(int i = 0; i<4;i++)    
    cout<<A[i]<<endl;

    int l = sizeof(A)/sizeof(A[0]);

    //first we have to sift(Right) the array then we have to enter the element in between them
    for(int i = l; i>pos;i--)
    {
        A[i] = A[i-1];      //Shifting Right
    }
    A[pos] = 99;
    l++;            //Here we increase the length by 1 to print the whole array

    cout<<"Now after insert 99 at A[3] the array becomes : "<<endl;
    for(int i = 0; i<l;i++)
    cout<<A[i]<<endl;
}