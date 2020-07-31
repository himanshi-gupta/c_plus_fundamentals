#include <iostream>
using namespace std;
int binary_search(int a[],int n,int num)
{
	
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==num)
        {
            return mid;
        }
        else if(a[mid]>num)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main() {
    int a[1000];
    int n,num;
    cin>>n>>num;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<binary_search(a,n,num);
    return 0;
}
