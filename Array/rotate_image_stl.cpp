#include<iostream>
#include<algorithm>
using namespace std;
void rotate_stl(int a[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        reverse(a[i],a[i]+m)
    }
    return;
}
void transpose(int a[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(a[i][j],a[j][i]);
        }    
    }
    return;
}
int main()
{
    int a[10][10],n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }    
    }
    rotate(a,n,m);
    transpose(a,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;    
    }
    return 0;
}