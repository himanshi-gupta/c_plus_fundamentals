#include <iostream>
using namespace std;
int main() {
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left=-1,right=-1;
    int sum=0,csum=0;
    for(int i=0;i<n;i++)
    {   
        for(int j=i;j<n;j++)
        {
            csum=0;
            for(int k=i;k<=j;k++)
            {
                csum+=a[k];
            }
            if(csum>sum)
            {
                sum=csum;
                left=i;
                right=j;
            }
        }
    }
    cout<<"Maximum sum is "<<sum<<endl;
    cout<<"The sub array with max sum is ";
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
