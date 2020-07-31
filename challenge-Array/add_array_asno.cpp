#include<iostream>
using namespace std;
int main() {
	int n,m,a[1000],b[1000],arr[1000];
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
	int c=max(n,m)-1;
	int j=n-1;
	int k=m-1;
    int s=0;
	while(j>=0 and k>=0)
	{
		arr[c]=(a[j]+b[k]+s)%10;
        s=(a[j]+b[k])/10;
		j--;
		k--;
		c--;
    }
	if(j>=0)
	{
		while(j>=0)
		{
			arr[c]=(a[j]+s)%10;
			s=a[j]/10;
			j--;
			c--;
		}
    }
	else if(k>=0)
	{
		while(k>=0)
		{
			arr[c]=(b[k]+s)%10;
			s=b[k]/10;
			k--;
			c--;
		}
	}
	c=max(n,m);
	for(int i=0;i<c;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"END";
	return 0;
}