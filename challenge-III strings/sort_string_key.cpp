#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string extract(string str,int key)
{
    char *s=strtok((char *) str.c_str()," ");
    while(key>1)
    {
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}

int Convertint(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=((s[i]-'0')*p);
        p*=10;
    }
    return ans;
}
bool numericCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return Convertint(key1)<Convertint(key2);
}

bool lexoCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
int main() 
{
    int n;
    cin>>n;
    cin.get();
    string s[100];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    pair<string,string> strpair[100];
    for(int i=0;i<n;i++)
    {
        strpair[i].first=s[i];
        strpair[i].second=extract(s[i],key);
    }
    if(ordering=="numeric")
    {
        sort(strpair,strpair+n,numericCompare);
    }
    else
    {
        sort(strpair,strpair+n,lexoCompare);
    }
    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
        {
            swap(strpair[i],strpair[n-i-1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<strpair[i].first<<endl;
    }
    return 0;
}
