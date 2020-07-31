/*
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab
*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int sp=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sp;j++)
		{
			cout<<" "<<'\t';
		}
		int j=i;
		for(;j<=(2*i-1);j++)
		{
			cout<<j<<'\t';
		}
		int m=j-2;
		for(;m>=i;m--)
		{
			cout<<m<<'\t';
		}
		cout<<endl;
		sp-=1;
	}
	return 0;
}