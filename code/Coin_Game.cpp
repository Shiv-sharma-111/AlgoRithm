#include<iostream>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int T;
cin>>T;
while(T--)
{
int N,i,turn=1;
cin>>N;
long int arr[N];
for(i=0;i<N;i++)
{
cin>>arr[i];
if(arr[i]%2==0)
{
while(arr[i]%2==0)
{
arr[i]=arr[i]/2;
turn++;
}
}
}
if(turn%2==0)
cout<<"Charlie\n";
else
cout<<"Alan\n";
}
return 0;
}
