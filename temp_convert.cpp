#include<iostream>
using namespace std;
int main()
{
	float f=0;
	float c;
	cout<<"f"<<"\t"<<"C"<<endl;
	while(f<=300)
	{
		c=(5.0/9)*(f-32);
		cout<<f<<'\t'<<int(c)<<endl;
		f+=20;
	}
	return 0;
}