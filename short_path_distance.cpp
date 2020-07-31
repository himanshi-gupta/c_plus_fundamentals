#include <iostream>
using namespace std;
int main() {
    char ch;
    ch=cin.get();
    int x=0,y=0;

    //finding final position coodinates.
    while(ch!='\n')
    {
        if(ch=='N' or ch=='n')
        {
            y+=1;
        }
        else if(ch=='S' or ch=='s'){
            y-=1;
        }
        else if(ch=='E' or ch=='e')
        {
            x+=1;
        }
        else if(ch=='W' or ch=='w')
        {
            x-=1;
        }
        ch=cin.get();
    }
    cout<<"the final position  is ("<<x<<","<<y<<")"<<endl;

    //finding the quadrant of final point.
    if(x==0 and y==0)
    {
        cout<<"we are at origin"<<endl;
    }
    else if(x>=0 and y>=0)
    {
        cout<<"we are in first quadrant"<<endl;
    }
    else if(x<=0 and y>=0)
    {
        cout<<"we are in second quadrant"<<endl;
    }
    else if(x<=0 and y<=0)
    {
        cout<<"we are in third quadrant"<<endl;
    }
    else if(x>=0 and y<=0)
    {
        cout<<"we are in fourth quadrant"<<endl;
    }

    //finding shortest path/distance.
    int n=x*x+y*y;
    
    float c=1,ans=0;
    for(int p=0;p<=3;p++)
    {
        while(ans*ans<=n)
        {
            ans+=c;
        }
        ans-=c;
        c/=10;
    }
    cout<<"The shortest distance is "<<ans<<endl;
    return 0;
}
