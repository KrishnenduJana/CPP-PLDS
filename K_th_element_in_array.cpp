//Find the k-th largest element of a given array.(Assignment 08.08.2022)
//Algo : First sort array then find the (k-1) element

#include<iostream>
using namespace std;
int main()
{
    int a[7]={-1,0,2,1,-11,12,13}, i, k, j,swap;
    cout<<"Enter the k-th position : ";
    cin>>k;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j])   //For sort upto k-th element
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    cout<<"The k-th largest is : "<<a[k-1]<<endl;// Here k-1 cause in array k starts from 0.
}