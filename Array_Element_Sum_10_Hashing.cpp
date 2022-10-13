/*
    Find the elements in array such that a + b = 10 using Hashing
    For More Details See Abdul Sir DSA Class (Udemy) Lecture 127

    Note that here we consider the case a>=0,b>=0

    Time Complexity = O(n)
*/

#include<iostream>
using namespace std;

int main()
{
    int A[] = {1,3,4,9,7,6,2,11,13};
    int lenA = sizeof(A)/sizeof(A[0]);
    int keySum = 10;
    int H[keySum + 1] = {0};
    int i;
    //Create a hash array
    for(i = 0; i<lenA; i++)
    {
        if(A[i]>=0 && A[i]<=5)      //We fill half 1 one in the hassing if A[i] = 4  then we do not need A[j] = 6 anymore
        H[A[i]] = 1;                //Hashing the hash with 1
    }
    /*Show hash array

    for(i = 0; i<keySum+1; i++)
    cout<<H[i]<<" ";

    */
   for(i = 0; i<lenA; i++)
   {
        if(H[keySum - A[i]]==1)
        cout<<A[i]<<" + "<<keySum - A[i]<<" = 10"<<endl;
   }
}