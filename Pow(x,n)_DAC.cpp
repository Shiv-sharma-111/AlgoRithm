#include<iostream>
using namespace std;
class V1
{
	public:
		int power(int x,unsigned int y)
		{
			if(y==0)
			{
				return 1;
			}
			else if(y%2==0)
			{
				return power(x,y/2)*power(x,y/2);
			}
			else
			{
				return x*power(x,y/2)*power(x,y/2);
			}
		}
	
};
int main()
{
	V1 s;
	int x=2;
	unsigned int y=3;
	cout<<s.power(x,y)<<endl;
	return 0;
}
