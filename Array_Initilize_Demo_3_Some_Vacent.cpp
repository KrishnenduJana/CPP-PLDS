#include<iostream>
using namespace std;
int main()
{
    int A[8]={11,12,13,14};
    cout<<A[3]<<endl;
    cout<<A[5]<<endl;
}

/*

Here we arrray initilize an array A with {11,12,13,14} then print A[3] = 14
But A[5] = 0 . Because when we initilize some element then the remaining
vacents are filled with 0

*/