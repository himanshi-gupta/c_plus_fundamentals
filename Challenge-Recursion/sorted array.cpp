/*
Take as input N, the size of an integer array. Take one more input, which is a list of N integers separated by a space, and store that in an array. Write a recursive function which prints true if the array is sorted, and false otherwise.

Input Format
N x y z

Constraints
1 < N < 1000
-10^9 < i < 10^9, where i is an element of the array

Output Format
true OR false

Sample Input
5
1 2 3 4 5
Sample Output
true
*/
#include<iostream>
using namespace std;
void insorted(long int a[],int n ,int k)
{
	if(k==n-1)
    {
        return true;
    }
    if(a[k]>a[k+1])
    {
        return false;
    }
    return insorted(a,n,k+1);
}
int main() {
	int n;
    long int a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    insorted(a,n,0);
	if(insorted(a,n,0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

	return 0;
}