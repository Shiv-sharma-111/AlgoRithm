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

int lcm(int arr[],int n)
{
	int ans=arr[0];
	for(int i=1;i<n;i++)
	{
		ans=ans*arr[i]/gcd(ans,arr[i]);
	}
	return ans;
}

int main()
{
	//code for fast input output
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//main code for claculating lcm
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Lcm of the array is:"<<lcm(arr,n)<<endl;
	
}
