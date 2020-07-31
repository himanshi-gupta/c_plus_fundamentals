#include<iostream>
using namespace std;
int lastElement(int a[],int j,int s1,int key,int n)
{
	int s=s1;
	if(j==n)
	{
		return s;
	}
	if(a[j]==key)
	{
		s=j;
	}
	return lastElement(a,j+1,s,key,n);
}
int main() {
	int n,m;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	cout<<lastElement(a,0,-1,m,n);
	return 0;
}