/*
Algorithm:

Binary Search (l, h, key)
{
    while(l<=h)
    {
        mid =  (l+h)/2;
        if(key = A[mid])
        {
            return A[mid];
        }
        else if(key<A[mid])
        {
            h = mid -1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
*/

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

    while(l<h)
    {
        mid =  (l+h)/2;
        if(key = A[mid])
        {
            cout<<"Key is found at : "<<mid<<endl;
            return 0;           //If you do not put then it will get into infinite loop :)
        }
        else if(key<A[mid])
        {
            h = mid -1;
        }
        else
        {
            l = mid + 1;
        }
    }

}