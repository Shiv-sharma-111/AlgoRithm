#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int keys;
	cin>>keys;
	int vec[keys];
	for(int i=0;i<keys;i++)
	{
		cin>>vec[i];
	}
	sort(arr,arr+n);
	sort(vec,vec+keys);
    return 0;
}
