#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int T;
	ll sum=0;
	cin>>T;
	while(T--)
	{
		vector<int> arr;
		int n;
		cin>>n;
		while(n--)
		{
			ll a,b;
			cin>>a>>b;
			while(a--)
			{
				arr.push_back(b);
			}
		}
		while(arr.size()!=1)
		{
			for(int i=0;i<arr.size();i++)
			{
				sum+=arr[i];
			}
			while(sum!=0)
			{
				int i=0;
				arr[i]
			}
		}
		
	}
}
// This is the second approch which satisfied all test cases
// http://www.sjsu.edu/faculty/watkins/Digitsum00.html
// page of the sourse behind the logic...............
#include<stdio.h>
using namespace std;
int main(void)
{
int t,m,d,i,j,k,flag;
unsigned long long int len,sum=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{
flag=0;
scanf("%d",&m);
for(j=0;j<m;j++)
{
scanf("%llu %d",&len,&d);
if(len!=0 && d!=0)
{
sum+=(((len%9)*(d%9))%9);
sum=sum%9;
flag=1;
}
}
if(sum==0 && flag==1)
sum=9;
printf("%llu\n",sum),sum=0;
}
return 0;
}
