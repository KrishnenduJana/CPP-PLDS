/*

Requirments : Two sorted array required A, B and one blank array of size (A) + size(B)


*/

#include<iostream>
using namespace std;

void merge(int A[], int B[], int C[],int lenA, int lenB)
{
    int i = 0, j = 0, k = 0;
    //---------------------------------------
    while (i<lenA && j<lenB)
    {
        if(A[i]<B[j])
        C[k++] = A[i++];
        else
        C[k++] = B[j++];        
    }

    //merge remaining from A
    for( ; i<lenA ; )
    C[k++] = A[i++];

    //merge remaining from B
    for( ; j<lenB ; )
    C[k++] = B[j++];
    //----------------------------
}

int main()
{
    int A[] = {1,2,5,66,77}, B[] = {11,12,13,14,15,16,17};
    int lenA, lenB;
    lenA = sizeof(A)/sizeof(A[0]);
    lenB = sizeof(B)/sizeof(B[0]);
    int C[lenA + lenB];
    
    merge(A,B,C,lenA,lenB);

    //Print the array C
    for(int k = 0; k<lenA + lenB; k++)
    cout<<C[k]<<" ";
}