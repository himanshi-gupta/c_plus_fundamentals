#include<iostream>
using namespace std;
void allindices(int a[],int j,int n,int key)
{
	if(j==n)
	{
		return;
	}
	if(a[j]==key)
	{
		cout<<j<<" ";
	}
	allindices(a,j+1,n,key);
}
int main() {
	int n,m;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	allindices(a,0,n,m);
	return 0;
}