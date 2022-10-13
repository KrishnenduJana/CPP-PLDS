/*
    Set union of two array
*/

#include<iostream>
using namespace std;

int main()
{
    int A[] = {1,2,5,66,77}, B[] = {1,2,13,14,5,16,17,55};
    int i, j, k = 0,l = 0, lenA, lenB, lenC;
    lenA = sizeof(A)/sizeof(A[0]);
    lenB = sizeof(B)/sizeof(B[0]);
    lenC = lenA + lenB;
    int C[lenC];                //Store union
    int lenD = max(lenA,lenB);  //min(a,b) will give the minimum value between a and b
    int D[lenD];

    //Set union----------------------------
    for(i = 0; i<lenA;i++)
    C[k++] = A[i];          //copying the all element of A in C

    for(j = 0; j<lenB; j++)
    {
        bool cond  = true;        
        for(i = 0;i<lenA; i++)
        {
            if(B[j] == A[i])    //Checking if then
            {
                cond = false;   //Commone element found
            }
        }
        if(cond == true)
        C[k++] = B[j];
        else
        D[l++] = B[j];

    }

    //----------------------------Set Union

    //Print the array C
    cout<<"Set union : ";
    for(int i = 0; i<k; i++)
    cout<<C[i]<<" ";

    //Print the array C
    cout<<"Set Intersection : ";
    for(int j = 0; j<l; j++)
    cout<<D[j]<<" ";
}