#include<iostream>
#include<algorithm>
using namespace std;
//DP vs Greedy----------------------------------------------------------------------
//Counting Money problem.
//for indian currency greedy technique is more optimum than DP.
//But not for all nation currency(work for some nation currency).
//DP is generalized and work for all country currency(india or outside india).
//in this type problem always go through some example.
//codingblocks/notes.dp.html link for the notes.
//for indian currency greedy is always is give optimal solution.
//two approches for DP 1.Top Down(Recursion+Memoization)   2.Bottom Up(iterative approch).
//Fibonacci with top down approch.
//space complexity o(n).
int topDownDp(int n,int *dp)
{
	if(n==0||n==1)
	{
		dp[n]=n;
		return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	else
	{
		dp[n]=topDownDp(n-1,dp)+topDownDp(n-2,dp);
		return dp[n];
	}
	
}
//bottom up is iterative approach.
//space complexity o(n) we can use with only with tree variable.
int bottomUpDp(int n)
{
	int *dp = new int[n];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
//Ladders Problem with DP-------------------------------------------
//total ways to reach the top in the ladder.
//just like fibonacci series
//Bottom up
int ways1(int n,int k)
{
	int *dp=new int[n];
	dp[0]=1;
	for(int step=1;step<=n;step++)
	{
		dp[step]=0;
		for(int j=1;j<=k;j++)
		{
			if(step-j>=0)
			dp[step]+=dp[step-j];
		}
	}
	return dp[n];
}
//using recursion solve ladder problem
int ways(int n,int k)
{
	if(n==0)
	return 1;
	if(n<0)
	return 0;
	int ans=0;
	for(int j=1;j<=k;j++)
	{
		ans+=ways(n-j,k);
	}
	return ans;
}
int main()
{
	int dp[100];
	for(int i=0;i<100;i++)
	{
		dp[i]=-1;
	}
	cout<<ways(5,4)<<endl;
	cout<<ways1(5,4)<<endl;
	//cout<<topDownDp(5,dp)<<endl;
	//cout<<bottomUpDp(5)<<endl;
	

}
//in Mathematical Induction involve problem we can use DP.
//Recursion take more place(Memory) than DP.
//Divide and conqour are non overlapping in nature.
