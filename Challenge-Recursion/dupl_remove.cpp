#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string RemDupl(string a[],int j,int m)
{
	if(j==m-1)
	{
		return a;
	}
	if(a[j]==a[j+1])
	{
		a.erase(j+1);
	}
	return RemDupl(a,j+1,strlen(a));
}
int main() {
	string a;
	cin>>a;
	cout<<RemDupl(a,0,strlen(a));
	return 0;
}