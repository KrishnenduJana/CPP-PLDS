//Program (1) Find the number of primes not greater than a given number n
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==2)        //base case for n = 2
    return true;
    else
    {
        for (int i = 2; i<n; i++)
        {
            if(n % i == 0)
            return false;
            else
            return true;
        }
    }
}

int main()
{
    int n;
    int count = 0;
    cout<<"Enter any positive number (n>1): "; cin>>n;
    for(int i = 2; i<=n; i++)
    {
    	if(isprime(i)==true)
    	count++;
	}
	
	cout<<"Then number of prime not greater than n = "<<n<<" is : "<<count;
}

/*
Explanation : 

Input : 5
Output : 3

Cause then number of prime not greater(less or equal to) than 5 are 2, 3, 5
*/