/*

Find maximum and minimum in an array with time complexiy O(n) and using one loop

*/

#include<iostream>
using namespace std;
int main()
{
    int A[] = {4,5,1,-9,17,2,11,12};
    int lenA = sizeof(A)/sizeof(A[0]);
    int max = A[0];
    int min = A[0];
    for (int i = 1; i < lenA; i++)
    {
        //For find max
        if(A[i]>max)
        max = A[i];

        //For find min
        if(A[i]<min)
        min = A[i];
    }

    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;
    
}