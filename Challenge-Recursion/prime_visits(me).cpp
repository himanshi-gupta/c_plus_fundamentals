#include<iostream>
using namespace std;
bool primeno( long int n)
{
    if(n==1 or n<=0)
    {
        return false;
    }
	int i=2;
	for(;i<=n/2;i+=1)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i>n/2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		int count=0;
		for(long int n=a;n<=b;n++)
		{
			if(primeno(n))
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}