#include<iostream>
using namespace std;
int main()
{
	int k;
	cout<<"enter the number of rows: ";
	cin>>k;
	cout<<"pattern: "<<endl;
	for(int i=1;i<=k;i++)
	{
		for(int p=1;p<=k-i;p++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<j<<" ";
		cout<<endl;
	}
}
