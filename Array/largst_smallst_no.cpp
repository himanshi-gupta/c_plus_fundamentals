//largest and smallest no. of the array
#include <iostream>
using namespace std;
int main() {
    int a[1000];
    int n,num;
    cout<<"Enter the no. of elements ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0],max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"\n Maximum no is "<<max;
    cout<<"\n Minimum no is "<<min;
    return 0;
}
