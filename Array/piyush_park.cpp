#include <iostream>
using namespace std;
int main() {
    int n,m,k,s;
    char a[10][10];
    cin>>n>>m>>k>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s<k)
            {
                cout<<"no";
                return 0;
            }
            if(a[i][j]=='.')
            {
                s-=2;
            }
            else if(a[i][j]=='*')
            {
                s+=5;
            }
            else{
                break;
            }
            if(j!=m-1)
            {
                s-=1;
            }
        }
    }
    cout<<"yes"<<endl;
    cout<<s;
}
