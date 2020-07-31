#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0){
            cout<<n<<" is not prime"<<endl;
            break;
        }
    }
    if(i==(n/2)+1)
    {
        cout<<n<<" is prime "<<endl;
    }
        
    return 0;
}
