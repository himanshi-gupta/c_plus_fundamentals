#include <iostream>
using namespace std;
int fib(int n){
    int a=0,b=1;
    int c=a+b;
    for(int i=1;i<=n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main() {
    int n;
    cin>>n;
    cout<<"ans is "<<fib(n);
    return 0;
}
