// simple program, ofcourse without errors
#include<iostream>
using namespace std;
int x;
inline int printvals(int i,int j)
{
	return((i+j)%2);
}
int& setx()
{
	return x;
}
main()
{
	int n;
	cout<<"enter a numerical value (preferably 0-9) :";
	cin>>n;
	setx()=n;
	for(int i=0;i<x;i++)
	{
		for(int k=x;k>x-i;k--)
		cout<<" ";
		for(int j=x;j>i;j--)
		{
			cout<<printvals(i,j);
			cout<<" ";
		}
		cout<<"\n";
	}
}
