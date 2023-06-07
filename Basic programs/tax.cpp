#include<iostream>
using namespace std;
int main()
{
	float tax;
	int income;
	cout<<"enter the income: ";
	cin>>income;
	if(income<150000)
	tax=0;
	else if(income<300000)
	tax=0.1*income;
	else if(income<500000)
	tax=0.2*income;
	else
	tax=0.3*income;
	cout<<"Tax = "<<tax;
}
