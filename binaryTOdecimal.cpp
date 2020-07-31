#include<iostream>
using namespace std;
int main()
{
	int n;
	while(n>0)
	{
		int num;
		cin>>num;
		int sum=0,j=0;
		while(num>0)
		{
			int r=num%10;
			sum+=(2**j)*r;
			num/=10;
			j+=1
		}
		cout<<sum<<endl;
		n-=1;
	}
	return 0;
}