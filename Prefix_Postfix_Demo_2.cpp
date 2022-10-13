#include <iostream>
using namespace std;
int main()
{
int i = 0, A[]= {12,29,33};
A[i] = i++;                     //First return (initilize) then increse --> A[1] = 0

cout<<"After A[i] = i++ "<<endl;
cout<<"A[0] = "<<A[0]<<endl;
cout<<"A[1] = "<<A[1]<<endl;
cout<<"A[2] = "<<A[2]<<endl;

int B[]= {12,29,27};
int j = 0;

B[j] = ++j;                    //First increse then return (initilize) --> B[1] = 1

cout<<"After B[i] = ++i "<<endl;
cout<<"B[0] = "<<B[0]<<endl;
cout<<"B[1] = "<<B[1]<<endl;
cout<<"B[2] = "<<B[2]<<endl;

return 0;
}

/*
If you use the ++ operator as a prefix like: ++var,
the value of var is incremented by 1; then it returns the value.

If you use the ++ operator as a postfix like: var++,
the original value of var is returned first; then var is incremented by 1.
*/
