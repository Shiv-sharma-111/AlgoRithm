//There are two method to find a fixed point
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
//1-st method---Linear Method
/*int linearSearch(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==i)
		return i;
	}
	return -1;
}*/
//2-nd method--binary search
int binarySearch(int arr[],int low,int high)
{
	if(high>=low)
	{
		int mid=(low+high)/2;
		if(mid==arr[mid])
		return mid;
		if(mid>arr[mid])
		return binarySearch(arr,(mid+1),high);
		else
		return binarySearch(arr,low,(mid-1));
	}
	return -1;
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
	//cout<<"Fixed Point is: "<<linearSearch(arr,n);
	cout<<"Fixed Point is: "<<binarySearch(arr,0,n-1);
	return 0;
}
