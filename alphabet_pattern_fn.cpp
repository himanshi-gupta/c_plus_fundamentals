#include <iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        char c='A';
        for(int j=1;j<=n-i+1;j++,c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    pattern(n);
}
