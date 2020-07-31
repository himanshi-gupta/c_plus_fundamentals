#include <iostream>
using namespace std;
int main() {
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {   
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                continue;
            }
            c+=1;

        }
    }
    cout<<"No of subarrays are "<<c;
    return 0;
}
