//fahrenheit to celsius
#include<iostream>
using namespace std;
int main()
{
	float F,C;
	cout<<"Enter the temperature in fahrenheit: ";
	cin>>F;
	C=(F-32)*5/9;
	cout<<"\nThe temperature in cesius is :"<<C;
}
