//FAST SORT IS NEVER EXIST
//AX SHIVAM SHARMA 
// ORDER 0(n)
// there is no any sorting algorithm which gives 0(n) order time complexity.

//BUCKET SORT

#include<bits/stdc++.h>
using namespace std;

void BucketSort(float arr[],int n)
{
	vector<float>bu[n];
	for(int i=0;i<n;i++)
	{
		int x=arr[i]*n;
		bu[x].push_back(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sort(bu[i].begin(),bu[i].end());
	}
	int index=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<bu[i].size();j++)
		{
			arr[index++]=bu[i][j];
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	BucketSort(arr,n);
	// for printing array..............................
	cout<<"Sorted Array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
