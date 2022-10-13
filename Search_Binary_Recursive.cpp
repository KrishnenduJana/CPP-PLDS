/*
Algorithm: Recursive Way

BinSearch (l, h, key)
{
    if(l<=h)
    {
        mid =  (l+h)/2;
        if(key = A[mid])
        {
            return A[mid];
        }
        else if(key<A[mid])
        {
            return BinSearch(l, mid - 1, key)
        }
        else
        {
            BinSearch(mid + 1, h, key)
        }
    }
}
*/

int BinSearch(int l, int h, int key)
{
    int A[] = {1,3,4,5,6,7,8,9,11,14,56,78};
    int mid;
    if(l<=h)
    {
        mid =  (l+h)/2;
        if(key = A[mid])
        {
            return mid;           //If you do not put then it will get into infinite loop :)
        }
        else if(key<A[mid])
        {
            return BinSearch(l, mid -1, key);
        }
        else
        {
            return BinSearch(mid + 1, h, key);
        }
    }
    else
    {
        return 0;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int A[] = {1,3,4,5,6,7,8,9,11,14,56,78};
    int len = sizeof(A)/sizeof(A[0]);
    int key, mid;
    int l = 0, h = len-1;
    cout<<"Enter the element that you want to search : ";
    cin>>key;
    int pos = BinSearch(l,h,key);
    if(pos == 0)
    cout<<"\nItem not found";
    else
    cout<<"\nItem found at : "<<pos<<endl;

    

}