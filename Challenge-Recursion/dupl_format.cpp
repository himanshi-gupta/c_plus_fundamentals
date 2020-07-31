#include<iostream>
#include<cstring>
using namespace std;
int RemDupl(char a[],int j,int m)
{
	cout<<a[j];
	if(j==m-1)
	{
		return 0;
	}
	if(a[j]==a[j+1])
	{
		cout<<"*";
	}
	return RemDupl(a,j+1,m);
}
int main() {
	char n[100];
    cin>>n;
	int m=strlen(n);
	RemDupl(n,0,m);
	return 0;
}