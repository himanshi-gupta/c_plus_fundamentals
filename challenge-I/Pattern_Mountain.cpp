/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
Explanation
Each number is separated from other by a tab.

*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int sp=2*(n-1)-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<'\t';
		}
		for(int j=1;j<=sp;j++)
		{
			cout<<" "<<'\t';
		}
		for(int j=i;j>0;j--)
		{
			if(j==n)
			{
				continue;
			}
			cout<<j<<'\t';
		}
		sp-=2;
		cout<<endl;
	}
	return 0;
}