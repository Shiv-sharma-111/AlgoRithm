#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void shuffle_Array(int arr[],int n)
{
	unsigned s=0;
	shuffle(arr,arr+n,default_random_engine(s));
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	shuffle_Array(arr,n);
}
