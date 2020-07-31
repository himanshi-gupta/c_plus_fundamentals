#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int m;
		cin>>m;
		int s=0,p=1;
		while(m>0)
		{
			int r=m%10;
			s=s+r*p;
			p*=2;
			m/=10;
		}
		cout<<s<<endl;
	}
	return 0;
}