#include<iostream>
using namespace std;
int main() {
	int n;
	char a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    int i=0,j=1;
    while(j<=n-1)
    {
        cout<<a[j-1];
        int ans=a[j]-a[j-1];
        cout<<ans;
        j++;
    }
	cout<<a[n-1];
    return 0;
}