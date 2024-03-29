/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 
*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int spaces=2*n-1;
	for(int i=1;i<=(n+1);i++)
	{
		for(int j=n;j>n-i;j--)
		{
			cout<<j<<" ";
		}
		for(int j=1;j<=spaces;j++)
		{
			cout<<" "<<" ";
		}
		for(int j=n-i+1;j<=n;j++)
		{
			if(j==0)
			{
				continue;
			}
			cout<<j<<" ";
		}
		cout<<endl;
		spaces-=2;
	}
	spaces+=4;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
		for(int j=1;j<=spaces;j++)
		{
			cout<<" "<<" ";
		}
		for(int j=i;j<=n;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
		spaces+=2;
	}
	return 0;
}