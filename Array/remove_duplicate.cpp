#include <iostream>
#include<cstring>
void duplicate(char a[])
{
    int i=0,j=1,n=strlen(a);
    if(n==0 or n==1)
    {
        return;
    }
    while(j<n)
    {
        if(a[j]!=a[i])
        {
            i++;
            a[i]=a[j];
        }
        j+=1;
    }
    a[i+1]='\0';
    return;
}
using namespace std;
int main() 
{
    char a[1000];
    cin.getline(a,1000);
    duplicate(a);
    cout<<a;
    return 0;    
}
