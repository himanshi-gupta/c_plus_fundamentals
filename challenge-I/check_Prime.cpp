#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	int i;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			cout<<"Not Prime";
			break;
		}
	}
	if(i==(n/2)+1)
	{
		cout<<"Prime";
	}
	return 0;
}