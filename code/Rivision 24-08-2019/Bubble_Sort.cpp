//BUBBLE SORT
//AX SHIVAM SHARMA

#include<bits/stdc++.h>
using namespace std;
void swap(int *one,int *two)
{
	int temp=*one;
	*one=*two;
	*two=temp;
}
void BubbleSort(int arr[],int n)
{
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
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
	BubbleSort(arr,n);
	return 0;
}
