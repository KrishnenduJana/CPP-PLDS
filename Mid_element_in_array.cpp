//Find the middle element of a given array.(Assignment 08.08.2022)
// Same concept as the previous program but here we have to find the k/2-th largest element.

#include<iostream>
using namespace std;
int main()
{
    int a[7]={-1,0,2,1,-11,12,13}, i, k, j,swap;
    k=sizeof(a)/sizeof(a[0]);	/*Note that here sizeof(a)/sizeof(a[0]) 
will give the length of the array */
    k=k/2;					// Initialize the variable k to k/2 position
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j])   	//For sorting upto k-th element
            {
                swap=a[i];		// Swapping using 3rd variable swap
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    cout<<"The Mid : "<<a[k+1]<<endl;// Here k-1 cause in array k starts from 0.
}