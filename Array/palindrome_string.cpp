#include <iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char a[])
{
    int i=0;
    int j=strlen(a)-1;
    while(i<j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main() {
    char a[1000];
    cin>>a;
    if(ispalindrome(a))
    {
        cout<<"Palindrome string";
    }
    else{
        cout<<"Not a palindrome string";
    }
    return 0;
}
