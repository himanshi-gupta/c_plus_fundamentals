#include<iostream>
using namespace std;
int main() {
	int n,m,a[1000],b[1000],c[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int j=n-1,k=m-1,i=max(j,k);
	int s=0,s1=0;
	while(j>=0 and k>=0)
	{
		int ans=a[j]+b[k];
		c[i]=(ans+s1)%10;
		s1=(ans+s1)/10;
		j--;
		k--;
		i--;
	}
	if(j>=0)
	{
		while(j>=0)
		{
			c[i]=(a[j]+s1)%10;
			s1=(a[j]+s1)/10;
			i--;
			j--;
		}
	}
	if(k>=0)
	{
		while(k>=0)
		{
			c[i]=(b[k]+s1)%10;
			s1=(b[k]+s1)/10;
			i--;
			k--;
		}
	}
	for(int i=0;i<(max(n,m));i++)
	{
		cout<<c[i]<<",";
	}
	cout<<"END";
	return 0;
}