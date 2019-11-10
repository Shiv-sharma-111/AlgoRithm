//Find the Pairs with given sum in an Array
#include<bits/stdc++.h>
using namespace std;
//BruteForce Approach to solve this problem
void BruteForce(int *arr,int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==k)
			{
				cout<<"Element is:"<<arr[i]<<" "<<arr[j]<<endl;
				break;
			}
		}
	}
}
//This approach take half time than the bruteforce approach
void Efficient(int *arr,int n,int k)
{
	sort(arr,arr+n);
	int l=0,r=n-1;
	while(l<r)
	{
		if(arr[l]+arr[r]>k)
		{
			r--;
		}
		else if(arr[l]+arr[r]<k)
		{
			l++;
		}
		else
		{
			cout<<"Element is:"<<arr[l]<<" "<<arr[r]<<endl;
			break;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	BruteForce(arr,n,k);
	Efficient(arr,n,k);
	return 0;
}
