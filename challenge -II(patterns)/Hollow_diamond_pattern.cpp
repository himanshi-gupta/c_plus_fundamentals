/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                   *
* 	*           *      *
* 	*	*       *      *	
Explanation
Each '*' is separated from other by a tab.
*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int spaces=-1;
	for(int i=1;i<=(n/2)+1;i++)
	{
		for(int j=i;j<=(n/2)+1;j++)
		{
			cout<<"*"<<'\t';
		}
		for(int j=1;j<=spaces;j++)
		{
			cout<<" "<<'\t';
		}
		for(int j=(n/2)+1;j>=i;j--)
		{
			if(j==1)
			{
				continue;
			}
			cout<<"*"<<"\t";
		}
		cout<<endl;
		spaces+=2;
	}
	spaces-=4;
	for(int i=1;i<=(n/2);i++)
	{
		for(int j=1;j<=i+1;j++)
		{
			cout<<"*"<<'\t';
		}
		for(int j=1;j<=spaces;j++)
		{
			cout<<" "<<'\t';
		}
		for(int j=1;j<=i+1;j++)
		{
			if(j==(n/2)+1)
			{
				continue;
			}
			cout<<"*"<<'\t';
		}
		cout<<endl;
		spaces-=2;
	}
	return 0;
}