// A MYSTERY NUMBER IS THAT NUMBER WHICH CAN BE EXPRESSED AS SUM OF TWO NUMBERS.
// AND THOSE TWO NUMBER SHOULD BE REVERSE OF EACH OTHER.

#include<bits/stdc++.h>
using namespace std;
/*int reverseNum(int x)
{
	string s = to_string(x);
	//convert integer into string by this method........
	reverse(s.begin(),s.end());
	stringstream ss(s);
	int rev=0;
	ss>>rev;
	return rev;
}*/
int reverseNum(int x)
{
	int res=0,digit;
	while(x!=0)
	{
		digit=x%10;
		x=x/10;
		res=digit+10*res;
	}
	return res;
}
bool MysteryNumber(int n)
{
	for(int i=1;i<=n/2;i++)
	{
		int j=reverseNum(i);
		if(i+j==n)
		{
			cout<<i<<" "<<j;
			return true;
		}
	}
	cout<<"Not a Mystery Number ";
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin>>n;
	MysteryNumber(n);
	return 0;
}
