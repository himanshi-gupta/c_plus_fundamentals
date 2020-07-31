#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int csum=0,sum=0;
    for(int i=0;i<n;i++)
    {
        csum+=a[i];
        if(csum<0)
        {
            csum=0;
        }
        sum=max(csum,sum);
    }
    cout<<"maximum sum is "<<sum<<endl;
    return 0;
}
