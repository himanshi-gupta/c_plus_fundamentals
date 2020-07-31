#include<iostream>
using namespace std;
void read_para(char a[],int max_len,char del='\n')
{
    int i=0;
    char ch=cin.get();
    while(ch!=del)
    {
        a[i]=ch;
        i++;
        if(i==(max_len-1))
        {
            break;
        }
        ch=cin.get();
    }
}
int main() 
{
    char a[1000];
    read_para(a,1000,'$');
    cout<<a;
	return 0;
}