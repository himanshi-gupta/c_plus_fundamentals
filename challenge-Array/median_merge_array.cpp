/*
We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

Input Format
First line contains the input n. Second and Third line contains n space separated integers.

Constraints
N < 1000

Output Format
Print the median in a single line.

Sample Input
5
1 3 5 7 9
2 4 6 8 10
Sample Output
5
Explanation
Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*/#include<iostream>
using namespace std;
int main() {
	int n,m,a[1000],b[1000],arr[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
    }
	int c=max(n,m)-1;
	int j=n-1;
	int k=m-1;
    int s=0;
	while(j>=0 and k>=0)
	{
		arr[c]=(a[j]+b[k]+s)%10;
        s=(a[j]+b[k])/10;
		j--;
		k--;
		c--;
    }
	if(j>=0)
	{
		while(j>=0)
		{
			arr[c]=(a[j]+s)%10;
			s=a[j]/10;
			j--;
			c--;
		}
    }
	else if(k>=0)
	{
		while(k>=0)
		{
			arr[c]=(b[k]+s)%10;
			s=b[k]/10;
			k--;
			c--;
		}
	}
	c=max(n,m);
	for(int i=0;i<c;i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"END";
	return 0;
}
#include<iostream>
using namespace std;
int main() {
	int n,a[1000],b[1000],c[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int i=0,j=0,k=0;
	while(i<n and j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else{
			c[k]=a[i];
			i++;
			k++;
			j++;
		}
	}
	if(i<5)
	{
		while(i<n)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	else if(j<5)
	{
		while(j<n)
		{
			c[k]=a[j];
			j++;
			k++;
		}
	}
	cout<<c[n-1];
	return 0;
}