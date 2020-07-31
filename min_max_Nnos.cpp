#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;

	int min_no=INT_MAX;
	int max_no=Int_MIN;
	while(i<n)
	{
		int num;
		cin>>num;
		if(num<min_no)
		{
			min_no=num;
		}
		else if(num>max_no)
		{
			max_no=num;
		}
		i+=1;
	}
	cout<<"The min no is "<<min_no<<endl;
	cout<<"The max no is "<<max_no<<endl;
	return 0;
}