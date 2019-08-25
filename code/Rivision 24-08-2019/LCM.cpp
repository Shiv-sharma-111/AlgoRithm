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

int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{
	//BASIC OPERATION FOR COMPETITIVE CODING
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//MAIN CODE 
	int a,b;
	cin>>a>>b;
	cout<<"LCM of these two number is:"<<lcm(a,b)<<endl;
}
