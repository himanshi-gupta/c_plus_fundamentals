#include<iostream>
using namespace std;
int main() 
{
	long long int n;
	cin>>n;
	int s=0;
	while(n>8)
	{
		int r=n%8;
		s=s*10+r;
		n/=8;
	}
	s=s*10+n;
	int sum=0;
	while(s>0)
	{
		int r=s%10;
		sum=sum*10+r;
		s/=10;
	}
	cout<<sum;
	return 0;
}