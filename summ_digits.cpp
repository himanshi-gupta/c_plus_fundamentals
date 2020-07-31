#include<iostream>
using namespace std;
int main()
{
	int n;
	int r,sum=0;
	while(n>0)
	{
		r=n%10;
		n/=10;
		sum+=r;
	}
	cout<<" Sum of digits is "<<sum;
	return 0;
}