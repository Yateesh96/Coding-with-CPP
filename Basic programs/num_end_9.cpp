#include<iostream>
using namespace std;
int main()
{
	int i,n;
	for(i=1;i<=100;i++)
	{
		n=i%10;
		if(n==9)
		cout<<i<<"\t";
	}
}
