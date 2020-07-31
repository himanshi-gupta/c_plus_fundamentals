#include<iostream>
#include<string>
using namespace std;
bool checkpalindrome(string a[],int n)
{
	int i=0;
	int j=n-1;
	if(n==0 or n==1)
	{
		return true;
	}
	else if(a[i]==a[j])
	{
		std::string s=a.substr((i+1),j);
		checkpalindrome(s,j),n-2);
	}
	else
	{
		return false;
	}
}
int main() {
	string a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<checkpalindrome(a,n);
	return 0;
}