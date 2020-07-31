#include<iostream>
using namespace std;
int main() 
{
	int a,b,c;
	cin>>a>>b>>c;
	int d=(b*b)-(4*a*c);
	cout<<d;
	int srt=0;
	while(srt*srt<=d)
	{
		srt+=1;
	}
	d=srt-1;
	int r1=(-b+d)/2;
	int r2=(-b-d)/2;
	if(d>0)
	{
		cout<<"Real and Distinct"<<endl;
		cout<<r1<<"\t"<<r2;
	}
	else if(d<0)
	{
		cout<<"Imaginary";
	}
	else{
		cout<<"Real and Equal"<<endl;
		cout<<r1<<'\t'<<r2;
	}
	return 0;
}