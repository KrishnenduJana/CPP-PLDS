/* Recursive Function : If a function calling itself then this function will called as Recursive Function
Syntex:

return_type function_name(argument)
{
  if(condition)     //To terminate recursion in certain stage
  {
    ......
    function_name(argument);
    ......
  }
}
*/
#include<iostream>
using namespace std;
void func1(int n)
{
    if(n > 0)
    {
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

1
2
3

But the output should be 1 only. This type of output is occurs cause
Adding some thoughts, call returns to its calling point as sir explained
and each function call has it's own stack memory so each time it keeps it's 
own copy of variable value. in this case value of n and so the next line just 
prints the value of n ... which is 1, 2, 3

For Clear Explanation See Abdul Bari Sir C++ Lecture No 50

*/