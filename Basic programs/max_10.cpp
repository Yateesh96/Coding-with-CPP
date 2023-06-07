#include<iostream>
using namespace std;
int main()
{
	int n,n1,max;
	cout<<"enter a number: ";
	cin>>n;
	max=n;
	for(int i=1;i<10;i++)
	{
		cout<<"enter a number: ";
		cin>>n1;
		if(max<n1)
		max=n1;
	}
	cout<<endl<<"the maximum of these numbers is: "<<max;
}
