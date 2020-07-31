#include <iostream>
using namespace std;
int main() {
    char ch;
    int digits=0;
    int spaces=0;
    int alphabets=0;
    int others=0;

    ch=cin.get();
    while(ch!='$')
    {
        if(ch>='0' and ch<='9')
        {
            digits++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
        {
            alphabets++;
        }
        else if(ch==' ' or ch=='\n' or ch=='\t')
        {
            spaces++;
        }
        else{
            others++;
        }
        ch=cin.get();
    }
    cout<<"Digits "<<digits<<endl;
    cout<<"alpabets "<<alphabets<<endl;
    cout<<"spaces "<<spaces<<endl;
    cout<<"Others "<<others<<endl;
    return 0;
}
