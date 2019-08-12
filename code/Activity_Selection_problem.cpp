//Greedy algorithm is more efficient than the other algorithm like Dynamic algorithm

#include<bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
	int i=0;
	cout<<"Following Activities are selected n"<<endl;
	//first activities always get selected
	cout<<i<<" ";
	for(int j=1;j<n;j++)
	{
		if(s[j]>=f[i])
		{
			cout<<j<<" ";
			i=j;
		}
	}
	
}

//Driver function
int main()
{
	int s[]={1,3,0,5,8,5};
	int f[]={2,4,6,7,9,9};
	int n=sizeof(s)/sizeof(s[0]);
	printMaxActivities(s,f,n);
	return 0;
}
//next problem ----- How to solve this problem if activity is not sorted.........
