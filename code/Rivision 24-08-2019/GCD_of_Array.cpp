#include<bits/stdc++.h>
using namespace std;
int twogcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	return twogcd(b%a,a);
}
int gcd(int arr[],int n)
{
	int ans=arr[0];
	for(int i=1;i<n;i++)
	{
		ans=twogcd(ans,arr[i]);
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//main code start from there
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"GCD of these array is: "<<gcd(arr,n)<<endl;
	return 0;
}
