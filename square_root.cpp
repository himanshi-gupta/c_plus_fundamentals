#include <iostream>
using namespace std;
int main() {
    int n,num;
    cin>>n>>num;
    
    float c=1,ans=0;
    for(int p=1;p<=num+1;p++)
    {
        while(ans*ans<=n)
        {
            ans+=c;
        }
        ans-=c;
        c/=10;
    }
    cout<<"The square root of "<<n<<" is "<<ans<<endl;
    return 0;
}
