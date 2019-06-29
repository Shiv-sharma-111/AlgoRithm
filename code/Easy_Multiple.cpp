#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	long long int x,x3,x5,x15,n3,n5,n15,ans3,ans5,ans15,ans;
	cin>>T;
	while(T--)
{
cin>>x;
x3=x;
x5=x;
x15=x;
x3--;
x5--;
x15--;
while(x3%3!=0){x3--;}
while(x5%5!=0){x5--;}
while(x15%15!=0){x15--;}
n3=x3/3;
n5=x5/5;
n15=x15/15;
ans3=n3*(3+x3)/2;
ans5=n5*(5+x5)/2;
ans15=n15*(15+x15)/2;
ans=(ans3+ans5)-ans15;
cout<<ans<<endl;
}
	return 0;
}
