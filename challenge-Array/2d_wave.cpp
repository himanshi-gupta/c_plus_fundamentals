/*
Take as input a two-d array. Wave print it column-wise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
*/
#include<iostream>
using namespace std;
int main() 
{
	int n,m;
	cin>>n>>m;
	int a[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[j][i]<<",";
			}
		}
		else
		{
			for(int j=n-1;j>=0;j--)
			{
				cout<<a[j][i]<<",";
			}
		}
	}
	cout<<"END";
	return 0;
}