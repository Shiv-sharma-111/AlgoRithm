#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,b,c,d; cin>>n; int a[n];
for(int i=0;i<n;cin>>a[i],i++);
cin>>b>>c;
if(b==c){cout<<"Yes"; return 0;}
while(n--){
b=a[b-1];
if(b==c) {cout<<"Yes"; return 0;}
}
cout<<"No";
return 0;
}
