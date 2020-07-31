#include<iostream>
using namespace std;
void quicksort(int a[],int i,int j,int n)
{
	if(i>=j)
	{
		int temp=a[n-1];
		int k=n-1;
		for(k=n-1;k>i;k--)
		{
			a[k]=a[k-1];
		}
		a[k]=temp;
		return;
	}
	if(a[i]>a[j])
	{
		swap(a[i],a[j]);
		i++;
	}
	else
	{
		j--;
	}
	return quicksort(a,i,j,n);
}
int main() {
	int n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-2,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}