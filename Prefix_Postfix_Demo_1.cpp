#include <iostream>
using namespace std;
int main()
{
int count = 10;
cout << "count = " << count << endl; //displays 10
cout << "count = " << ++count << endl; //displays 11 (prefix)
cout << "count = " << count << endl; //displays 11
cout << "count = " << count++ << endl; //displays 11 (postfix)
cout << "count = " << count << endl; //displays 12
return 0;
}

/*
If you use the ++ operator as a prefix like: ++var,
the value of var is incremented by 1; then it returns the value.

If you use the ++ operator as a postfix like: var++,
the original value of var is returned first; then var is incremented by 1.
*/
