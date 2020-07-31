#include<iostream>
using namespace std;
int main() 
{
	long long int n,m;
	cin>>n;
	m=n;
	int sum=0;
	int c=0;
	while(n>0)
	{
		n/=10;
		c+=1;
	}
	n=m;
	while(n>0)
	{
		int r=n%10;
        int pow=1;
        for(int ct=1;ct<=c;ct++)
        {
            pow*=r;
        }
		sum=sum+pow;
		n/=10;
	}
	if(m==sum)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	return 0;
}