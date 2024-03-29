/*
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format
Enter a number N , add N more numbers

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true
*/
#include<iostream>
using namespace std;
bool palindrome(int beg,int end,int a[])
{
	if(beg>=end)
	{
		return true;
	}
	if(a[beg]==a[end])
	{
		return palindrome(beg+1,end-1,a);
	}
	else
	{
		return false;
	}

	
}
int main() {
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(palindrome(0,n-1,a))
	{
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}