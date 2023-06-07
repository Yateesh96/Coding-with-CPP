#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,count=0;
	for(i=1;i<=200;i++)
	{
		if(i%2==0)
		{
			count++;
			sum=sum+i;
		}
	}
	cout<<"number of even numbers between interval(1-200) is: "<<count;
	cout<<"\nsum of these even numbers: "<<sum;
}
