//IF WE SUBTRACT SMALLER FROM LARGER , GCD DOES NOT CHANGE. 
//SO IF KEEP SUBTRACTING REPEATEDLY THE LARGER OF TWO, WE END UP WITH GCD.
//NOW INSTEAD OF SUBTRACTION, IF WE DIVIDE SMALLER NUMBER , THE ALGORITHM STOPS WHEN WE FIND REMAINDER ZERO.

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
		
	}
	return gcd(b%a,a);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"GCD is:"<<gcd(a,b)<<endl;
}
