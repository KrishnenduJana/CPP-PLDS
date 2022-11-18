//Merge Sort Iterative

#include<iostream>
using namespace std;

void merge(int A[],int l,int mid,int h)
{
    int i,j,k;
    i=l;
    j=mid+1;
    k=l;
    
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        B[k++]=A[i++];
        else
        B[k++]=A[j++];
    }
    
    for(;i<=mid;i++)
    B[k++]=A[i];
    for(;j<=h;j++)
    B[k++]=A[j];

    for(i=l;i<=h;i++)       //copy
    A[i]=B[i];
}

void IMergeSort(int A[],int n)
{
    int p,i,l,mid,h;
    for(p=2;p<=n;p=p*2)     //Here this phase loop increase 2, 4, 8, 16,...
    {
        for(i=0; i+p-1<n; i=i+p)    //Here i + p-1<n and i=i+p. Here i increase by 2,4,,8,...
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);
        }
        if(n-i>p/2)
        {
           // l = i;
            //h = i+p-1;
            //mid = (l+h)/2;
            merge(A, l, mid, n-1);      //(n-1) term marge
        }
    }
    if(p/2<n)
    {
        merge(A,0,p/2-1,n-1);
    }
}
int main()
{
    int A[]={11,5,-11,2,6,-33,1,22,99},n=sizeof(A)/sizeof(A[0]),i;
    IMergeSort(A, n);
    for(i=0;i<n;i++)
    cout<<A[i]<<" ";
    return 0;
}