//Power calculation
#include<iostream>
using namespace std;
int main()
{
	int n,x,res=1,i;
	cout<<"enter the base value: ";
	cin>>n;
	cout<<"enter the power value: ";
	cin>>x;
	for(i=1;i<=x;i++)
	{
		res=res*n;
	}
	cout<<"\nthe result of "<<n<<"^"<<x<<" is : "<<res;
}
