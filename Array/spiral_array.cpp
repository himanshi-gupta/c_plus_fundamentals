#include<iostream>
using namespace std;
void spiral(int a[100][100],int n,int m)
{
    int srow=0,erow=n-1;
    int scol=0,ecol=m-1;
    while(srow<=erow and scol<=ecol)
    {
        for(int i=scol;i<=ecol;i++)
        {
            cout<<a[srow][i]<<" ";
        }
        srow++;
        for(int i=srow;i<=erow;i++)
        {
            cout<<a[i][ecol]<<" ";
        }
        ecol--;
        if(erow>srow)
        {
            for(int i=ecol;i>=scol;i--)
            {
                cout<<a[erow][i]<<" ";
            }
            erow--;
        }
        if(ecol>scol)
        {
            for(int i=erow;i>=srow;i--)
            {
                cout<<a[i][scol]<<" ";
            }
            scol++;
        }
    }
    return;
}
int main()
{
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    spiral(a,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    return 0;
}