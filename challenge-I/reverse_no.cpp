#include<iostream>
using namespace std;
int main() 
{	
	long long int n;
	cin>>n;
	int reverse=0;
	while(n>0)
	{
		int r=n%10;
		reverse=reverse*10+r;
		n/=10;
	}
	cout<<reverse;
	return 0;
}