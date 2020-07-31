#include<iostream>
using namespace std;
int check_strength(int a[][100],int n,int m,int k,int s)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s>k)
			{
				if(a[i][j]=='.')
				{
					s-=2;
				}
				else if(a[i][j]=='*')
				{
					s+=5;
				}
				else
				{
					break;
				}
			}
			else{
				cout<<"false";
			}
			if(j!=m-1)
			{
				s-=1;
			}
		}
	}
	cout<<"Yes"<<endl;
	cout<<s;
}
int main() 
{
	int m,n,k,s,a[100][100];
	cin>>n>>m>>k>>s;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	check_strength(a,n,m,k,s);
	return 0;
}