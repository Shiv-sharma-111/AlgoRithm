//REMOVE AN ELEMENT TO MINIMIZE THE LCM OF THE GIVEN ARRAY
//ASKED IN ADOBE
#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
	int hcf=__gcd(a,b);
	return (a*b)/hcf;
}
int MinLCM(int *arr,int n)
{
	int Prefix[n+2],Suffix[n+2];
	Prefix[1]=arr[0];
	for(int i=2;i<=n;i++)
	{
		Prefix[i]=lcm(Prefix[i-1],arr[i-1]);
	}
	Suffix[n]=arr[n-1];
	for(int i=n-1;i>=1;i--)
	{
		Suffix[i]=lcm(Suffix[i+1],arr[i-1]);
	}
	int ans=min(Suffix[2],Prefix[n-1]);
	for(int i=2;i<n;i++)
	{
		ans=min(ans,lcm(Prefix[i-1],Suffix[i+1]));
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<MinLCM(arr,n);
	return 0;
}
