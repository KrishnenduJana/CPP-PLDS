/*
    Find the elements in array such that a + b = 10
*/

#include<iostream>
using namespace std;

int main()
{
    int A[] = {1,3,4,9,7,6,2,11,13};
    int lenA = sizeof(A)/sizeof(A[0]);
    int keySum = 10;
    int i, j;

    for(i = 0; i<lenA - 1; i++)     //This for A[i] moves from 0 to (n-2)
    {
        for(j = i + 1; j<lenA; j++) //This for A[j] move to i+1 to n-1
        {
            if(A[i] + A[j] == keySum)
            {
                cout<<A[i]<<" + "<<A[j]<<" = 10"<<endl;                
            }
        }
    }
}