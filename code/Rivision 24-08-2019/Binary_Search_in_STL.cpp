#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// implementation of main code
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	} 
	if(binary_search(arr,arr+n,15))
	{
		cout<<"15 exist in this array:"<<endl;
	}
	else
	{
		cout<<"15 is not present in this array:"<<endl;
	}
}
