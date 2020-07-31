#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maximum;
	cin>>maximum;
    int i=0,j=n-1;
	while(i<j)
    {
        if((a[i]+a[j])==maximum)
		{	cout<<a[i]<<" and "<<a[j]<<endl;
            i+=1;j-=1;
        }
        else if((a[i]+a[j])>maximum)
        {
            j-=1;
        }
        else{
            i+=1;
        }
	}
	return 0;
}