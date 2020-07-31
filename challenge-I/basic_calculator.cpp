#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	while(ch!='x')
	{
		if(ch=='+')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x+y)<<endl;
		}
		else if(ch=='-')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x-y)<<endl;
		}
		else if(ch=='*')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x*y)<<endl;
		}
		else if(ch=='/')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x/y)<<endl;
		}
		else if(ch=='%')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x%y)<<endl;
		}
		else
		{
			cout<<"Invalid operation. Try again."<<endl;
		}		 
		cin>>ch;
		continue; 
	}
	return 0;
}#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	while(ch!='x')
	{
		if(ch=='+')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x+y)<<endl;
		}
		else if(ch=='-')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x-y)<<endl;
		}
		else if(ch=='*')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x*y)<<endl;
		}
		else if(ch=='/')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x/y)<<endl;
		}
		else if(ch=='%')
		{
			int x,y;
			cin>>x>>y;
			cout<<(x%y)<<endl;
		}
		else
		{
			cout<<"Invalid operation. Try again."<<endl;
		}		 
		cin>>ch;
		continue; 
	}
	return 0;
}