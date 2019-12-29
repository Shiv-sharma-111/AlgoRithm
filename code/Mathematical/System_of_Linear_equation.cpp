#include<bits/stdc++.h>
using namespace std;
//Trace of a Matrix
//-->sum of the diagonal element's of a square matrix is called the trace of the matrix
void TraceofMatrix(int arr[3][3])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=arr[i][j];
			}
		}
	}
	cout<<sum<<endl;
}
//Rank of the matrix
//--->> rank of matrix is the number of non zero rows in the rows reduced form 
// or the maximum number of independent rows or the maximum number of independent coloumn's
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// you can enter the order and element of the matrix manually but here we take a predefined manner
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	TraceofMatrix(arr);
}
