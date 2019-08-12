//Every positive fraction can be represented as sum of unique unit fraction.
// A fraction is unit fraction if numerator is 1 and denominator is a positive integer.
#include<bits/stdc++.h>
using namespace std;


void printEgyptian(int nr, int dr)
{
	if(dr==0 || nr ==0)
	return;
	if(dr%nr==0)
	{
		cout<<"1/"<<dr/nr;
		return;
	}
	if(nr%dr==0)
	{
		cout<<nr/dr;
		return;
	}
	if(nr>dr)
	{
		cout<<nr/dr<<" + ";
		printEgyptian(nr%dr,dr);
		return;
	}
	
	
	int n=dr/nr+1;
	cout<<"1/"<<n<<" + ";
	printEgyptian(nr*n-dr,dr*n);
	
}
//Driver Function
int main()
{
	int nr=6,dr=14;
	cout<<"Egyptian Fraction Representation of "<<nr<<"/"<<dr<<" is"<<endl;
	printEgyptian(nr,dr);
	return 0;
}
