#include<iostream>
using namespace std;
int main() 
{
	int n;
	long long int num;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int odd=0,even=0;
		cin>>num;
		while(num>0)
		{
			int r=num%10;
			(r%2==0)?(even+=r):(odd+=r);
			num/=10;
		}
		if(odd%3==0 or even%4==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}