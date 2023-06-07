//PIN verification
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int pin=96691,ent_pin,count;
	for(count=0;count<3;count++)
	{
		cout<<"\nenter your PIN number: ";
		cin>>ent_pin;
		if(ent_pin==pin)
		{
			cout<<"PIN verified\nWelcome";
			break;
		}
		else
		cout<<"PIN incorrect!!\n";
	}
	if(count>=3)
	{
		cout<<"\nLimit expired";
		exit(0);
	}
}
