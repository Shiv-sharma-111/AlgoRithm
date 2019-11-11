//Asked in flipcard
//linear Time and constant space;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		if(k>0)
		{
			v.push_back(k);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if(v[i+1]-v[i]!=1)
		{
			cout<<v[i]+1<<endl;
			break;
		}
	}
	return 0;
}
