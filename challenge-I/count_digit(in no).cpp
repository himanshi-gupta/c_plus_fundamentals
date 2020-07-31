#include<iostream>
using namespace std;
int main() {
	long long int n;
	int digit,c=0;
	cin>>n>>digit;
	while(n>0)
	{
		int r=n%10;
		if(r==digit)
		{
			c+=1;
		}
		n/=10;
	}
	cout<<c;
	return 0;
}