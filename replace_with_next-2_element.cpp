#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp1=arr[0];
	int temp2=arr[1];
	for(int i=0;i<n-2;i++)
	{
       arr[i]=arr[i+1]+arr[i+2];
	}
	arr[n-2]=arr[n-1]+temp1;
	arr[n-1]=temp1+temp2;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
