//INSERTION SORT
//AX SHIVAM SHARMA

#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n)
{
	int key,j;
	for(int i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
	cout<<"Sorted Array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
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
	InsertionSort(arr,n);
	return 0;
}
