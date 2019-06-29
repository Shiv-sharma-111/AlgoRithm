#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int n=str.size();
	if(n%2==0)
	{
		int count=0;
		if(n==2)
		{
			if(str[0]==str[1])
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else
		{
		for(int i=0;i<=(n/2);i++)
		{
			if(str[i]==str[n-i-1])
			{
				count++;
			}
		}
		if(count==(n/2))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	    }
	}
	else
	{
		int count=0;
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
		
		for(int i=0;i<(n/2);i++)
		{
			if(str[i]==str[n-i-1])
			{
				count++;
			}
		}
		if(count==(n/2))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	    }
	}
}
