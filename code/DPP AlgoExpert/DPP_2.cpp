#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach To solve this problem
// Time taken 0.24
void BruteForce(int *arr,int n)
{
	int num=1;
	for(int i=0;i<n;i++)
	{
		num*=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<num/arr[i]<<" ";
	}
}
//Solution of problem without using Divede sign
void Solution(int *arr,int n)
{
	int num=1;
	for(int i=0;i<n;i++)
	{
		
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int arr[5]={1,2,3,4,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	//BruteForce(arr,n);
	Solution(arr,n);
	return 0;
}
