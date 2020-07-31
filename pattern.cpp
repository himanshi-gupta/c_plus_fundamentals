#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cin>>n;
	while(i<=n)
	{
		if(i%2==0)
		{
			cout<<"1";
			int j=1;
			while(j<=i-2)
			{
				cout<<"0";
				j+=1;
			}
			cout<<"1";
		}
		else
		{
			int j=1;
			while(j<=i)
			{
				cout<<"1";
				j+=1;
			}
		}
		i+=1;
		cout>>endl;
	}
	return 0;
}