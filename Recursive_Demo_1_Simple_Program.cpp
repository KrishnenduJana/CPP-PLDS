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
        cout<<n<<endl;
        func1(n-1);
    }
}

#include<iostream>
int main()
{
    int p = 3;
    func1(p);
    

}