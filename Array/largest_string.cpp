#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int m=0;
    char c[1000],a[1000];
    cin.get();
    for(int i=1;i<=n;i++)
    {
        cin.getline(a,1000);
        int n=strlen(a);
        if(n>m)
        {
            m=n;
            strcpy(c,a);
        }
    }
    cout<<"string of maximum  length is "<<c;
    return 0;
}
