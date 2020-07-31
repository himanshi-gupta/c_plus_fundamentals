#include<iostream>
using namespace std;
int main() 
{
	long long int n;
	cin>>n;
	int s=0,p=1;
	while(n>0)
	{
		int r=n%10;
		s=s+r*p;
		p*=2;
		n/=10;
	}
	cout<<s;
	return 0;
}