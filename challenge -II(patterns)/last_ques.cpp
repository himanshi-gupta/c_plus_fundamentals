/*
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 
Input Format
Take N as input.

Constraints
N is odd number.

Output Format
Pattern should be printed with a space between every two values.

Sample Input
7
Sample Output
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
Explanation
Catch the pattern and print it accordingly

*/
#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	if(n%2!=0)
	{
		int space=n-1,sp=0;
		for(int i=1;i<=(n/2)+1;i++)
		{
			for(int j=1;j<=space;j++)
			{
				cout<<" "; 
			}
			for(int j=i;j>=1;j--)
			{
				cout<<j;
			}
			for(int j=1;j<=sp;j++)
			{
				cout<<" ";
			}
			for(int j=1;j<=i;j++)
			{
                if(i==1)
                {
                    continue;
                }
				cout<<j;
			}
			cout<<endl;
			space-=2;
			sp+=2;
		}
        space+=4;
        sp-=4;
        for(int i=(n/2);i>=1;i--)
        {
            for(int j=1;j<=space;j++)
			{
				cout<<" "; 
			}
			for(int j=i;j>=1;j--)
			{
				cout<<j;
			}
			for(int j=1;j<=sp;j++)
			{
				cout<<" ";
			}
			for(int j=1;j<=i;j++)
			{
                if(i==1)
                {
                    continue;
                }
				cout<<j;
			}
			cout<<endl;
			space+=2;
			sp-=2;
        }

	}
	return 0;
}