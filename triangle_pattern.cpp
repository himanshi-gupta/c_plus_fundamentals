#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int sp=1;sp<=n-i;sp++)
		{
			cout<<" ";
		}
		int value=i;
		for(int in=1;in<=i;in++)
		{
			cout<<value;
			value+=1;
		}

		value-=2;
		for(int in=1;in<=i-1;in++)
		{
			cout<<value;
			value-=1;
		}
        cout<<endl;
	}
	return 0;
}