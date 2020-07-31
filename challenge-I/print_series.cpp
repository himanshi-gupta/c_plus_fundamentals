#include<iostream>
using namespace std;
int main() 
{
	int n1,n2;
	cin>>n1>>n2;
	int c=1;
	for(int i=1;c<=n1;i++)
	{
		int res=3*i+2;
		if(res%n2==0)
		{
			continue;
		}
		else
		{
			cout<<res<<endl;
			c++;
		}
	}
	return 0;
}