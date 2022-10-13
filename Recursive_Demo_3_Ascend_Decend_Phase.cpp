/* Syntex:

return_type function_name(argument)
{
  if(condition)     //To terminate recursion in certain stage
  {
    ascending phase
    ......
    function_name(argument);
    ......
    decending phase
  }
}
*/
#include<iostream>
using namespace std;
void func1(int n)
{
    if(n > 0)
    {
        cout<<n<<endl;
        func1(n-1);
        cout<<n<<endl;
    }
}

#include<iostream>
int main()
{
    int p = 3;
    func1(p);

}

/*
Here O/P is :
3
2
1
1
2
3

This O/P is due to ascending and descending phase

*/