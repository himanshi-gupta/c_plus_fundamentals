#include <iostream>
using namespace std;
int lastElement(int a[],int n,int key)
{
    if(n==-1)
    {
        return -1;
    }
    if(a[n]==key)
    {
        return n;
    }
    return lastElement(a,n-1,key);
}
int main() {
    int n,m;
    cin>>n;
    int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	cout<<lastElement(a,n-1,m);
}
