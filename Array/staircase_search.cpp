#include<iostream>
#include<algorithm>
using namespace std;
void staircase(int a[10][10],int n,int m,int key)
{
    int i=0,j=m-1;
    while(i>=0 and j>=0 and i<n and j<m)
    {
        if(a[i][j]==key)
        {
            cout<<key<<" found at ("<<i<<" , "<<j<<")";
            return;
        }
        else if(a[i][j]>key)
        {
            j-=1;
        }
        else if(a[i][j]<key)
        {
            i+=1;
        }
    }
    cout<<key<<" not found";
    return;
}
int main()
{
    int a[10][10],n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }    
    }
    staircase(a,n,m,k);
    return 0;
}