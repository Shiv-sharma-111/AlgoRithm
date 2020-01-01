//C++ program for Knight Tour Problem
#include<bits/stdc++.h>
using namespace std;
#define N 8
int isSafe(int x,int y,int sol[N][N])
{
	return (x>=0 && x<N && y>=0 && y<N && sol[x][y]==-1);
}
void PrintSolution(int sol[N][N])
{
	for(int x=0;x<N;x++)
	{
		for(int y=0;y<N;y++)
		{
			cout<<sol[x][y]<<" ";
		}
		cout<<endl;
	}
}
int SolveKTUtil(int x,int y, int movei,int sol[N][N], int xMove[N],int yMove[N])
{
	int k,next_x,next_y;
	if(movei==N*N)
	return 1;
	
	for(k=0;k<8;k++)
	{
		next_x=x+xMove[k];
		next_y=y+yMove[k];
		if(isSafe(next_x,next_y,sol))
		{
			sol[next_x][next_y]=movei;
			if(SolveKTUtil(next_x,next_y, movei+1,sol, xMove,yMove)==1)
			return 1;
			else
			sol[next_x][next_y]=-1;
		}
	}
	return 0;
}
int SolveKT()
{
	int sol[N][N];
	// Initialize the solution matrix
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			sol[i][j]=-1;
		}
	}
	int xMove[8]={2,1,-1,-2,-2,-1,1,2};
	int yMove[8]={1,2,2,1,-1,-2,-2,-1};
	sol[0][0]=0;
	if(SolveKTUtil(0,0,1,sol,xMove,yMove)==0)
	{
		cout<<"Solution Does Not Exist"<<endl;
	}
	else
	{
		PrintSolution(sol);
	}
	return 1;
}

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	SolveKT();
	return 0;
}
