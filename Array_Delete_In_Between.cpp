//Delete and Decrease the size of the array

#include<iostream>
using namespace std;
int main()
{
    int A[]={11,12,13,-11,15};
    int pos = 2;                //Here we want to delete the element at the index position 3
    int l = sizeof(A)/sizeof(A[0]);

    cout<<"Given array : "<<endl;
    for(int i = 0; i<l;i++)    
    cout<<A[i]<<endl;

    //first we have to sift(left) the array then we have to delete the element in between them
    for(int i = pos; i<l;i++)
    {
        A[i] = A[i+1];      //Shifting Left
    }

    l--;            //Here we decrease length by 1 to print the whole array

    cout<<"Now after delete 13 at A[3] the array becomes : "<<endl;
    for(int i = 0; i<l;i++)
    cout<<A[i]<<endl;
}