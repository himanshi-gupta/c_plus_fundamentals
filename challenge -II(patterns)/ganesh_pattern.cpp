/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Input Format
Enter value of N ( >=5 )

Constraints
5 <= N <= 99

Output Format
Print the required pattern.

Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
    int sp=(n/2)-1;
	cout<<"*";
	for(int j=0;j<sp;j++)
	{
		cout<<" ";
	}
	for(int j=0;j<(n/2)+1;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i=1;i<=(n/2)-1;i++)
	{
		cout<<"*";
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"*";
	}
    cout<<endl;
	for(int i=1;i<=(n/2)-1;i++)
	{
        for(int j=0;j<(n/2);j++)
        {
            cout<<" ";
        }
		cout<<"*";
		for(int j=0;j<sp;j++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int j=1;j<=(n/2)+1;j++)
	{
		cout<<"*";
	}
	for(int j=0;j<sp;j++)
	{
		cout<<" ";
	}
 	cout<<"*";
	return 0;
}