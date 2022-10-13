//Show all possible combination of n = a^2 + b^2 + c^2 + d^2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a positive integer: ";
	cin>>n;
	int sum,i1,i2,i3,i4,count=0;
	for(i1=0;i1<=n;i1++)
	{
		for(i2=0;i2<=n;i2++)
		{
			for(i3=0;i3<=n;i3++)
			{
				for(i4=0;i4<=n;i4++)
				{
					sum=i1*i1+i2*i2+i3*i3+i4*i4;
					if(sum==n)
					{
						if(i1>=i2)
						{
							if(i2>=i3)
							{
								if(i3>=i4)
								{
									cout<<n<<" = "<<i1*i1<<" + "<<i2*i2<<" + "<<i3*i3<<" + "<<i4*i4<<endl;
									count++;
									break;						
								}
							}
						}
						
					}
				}
			}
		}
	}
	cout<<"There are total "<<count<<" possible distinct arrangements"<<endl;
}

/* 	I/P:Enter a positive integer: 123
O/P:	
123 = 49 + 49 + 16 + 9
123 = 49 + 49 + 25 + 0
123 = 64 + 25 + 25 + 9
123 = 64 + 49 + 9 + 1
123 = 81 + 25 + 16 + 1
123 = 121 + 1 + 1 + 0
There are total 6 possible distinct arrangements

Enter a positive integer: 234
234 = 81 + 64 + 64 + 25
234 = 81 + 81 + 36 + 36
234 = 100 + 49 + 49 + 36
234 = 100 + 81 + 49 + 4
234 = 100 + 100 + 25 + 9
234 = 121 + 64 + 49 + 0
234 = 121 + 81 + 16 + 16
234 = 121 + 100 + 9 + 4
234 = 144 + 49 + 25 + 16
234 = 144 + 64 + 25 + 1
234 = 144 + 81 + 9 + 0
234 = 169 + 36 + 25 + 4
234 = 169 + 49 + 16 + 0
234 = 169 + 64 + 1 + 0
234 = 196 + 25 + 9 + 4
234 = 196 + 36 + 1 + 1
234 = 225 + 4 + 4 + 1
234 = 225 + 9 + 0 + 0
There are total 18 possible distinct arrangements

Disadvantage : It takes much time. Time complexity has to be reduced
*/