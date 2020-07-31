#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0,sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i+=1;
	}
	cout<<"sum of"<<n<<"numbers is"<<sum;
	return 0;
}