#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    int cs[1000];
    cin>>a[0];
    cs[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cs[i]=cs[i-1]+a[i];
    }
    int csum=0,sum=0,left=0,right=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            csum=cs[j]-cs[i-1];
            if(csum>sum)
            {
                sum=csum;
                left=i;
                right=j;
            }
        }
    }
    cout<<"maximum sum is "<<sum<<endl;
    cout<<"max sum sub array is ";
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
