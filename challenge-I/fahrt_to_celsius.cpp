#include<iostream>
using namespace std;
int main() {
	int minf,maxf,c,step;
	cin>>minf>>maxf>>step;
	while(minf<=maxf)
	{
		c=(5/9.0)*(minf-32);
		cout<<minf<<'\t'<<c<<endl;
		minf+=step;
	}
	return 0;
}