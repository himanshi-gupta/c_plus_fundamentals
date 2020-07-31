#include <iostream>
using namespace std;
int x=1;
int main() {
    int x=10;
    int x=111;
    cout<<"Local x "<<x<<endl;
    for(int x=0;x<=6;x++)
    {
        cout<<"loop scope "<<x<<endl;
        cout<<"Global x "<<::x<<endl;
    }      
    cout<<"Local x "<<x<<endl;
    cout<<"Global x "<<::x;
    return 0;
}
