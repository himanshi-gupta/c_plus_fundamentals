#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int num,m=0;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        m=m^num;
    }
    cout<<"Unique Number is "<<m;
    return 0;
}
