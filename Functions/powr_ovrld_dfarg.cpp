//power calculation using function overloading and default arguments
#include<iostream>
using namespace std;
int power(int,int=2);
float power(float,int=2);
double power(double,int=2);
long long power(long,int=2);
void power(char,int);
int main()
{
	char choice;
	cout<<"enter the argument choice:";
	cout<<"\ni-int  f-float  d-double  l-long  c-char\n";
	cin>>choice;
	switch(choice)
	{
		case 'i':
			int b1,p1;
			cout<<"enter the base and power value: \n";
			cin>>b1>>p1;
			cout<<"the value of ("<<b1<<")^"<<p1<<" is "<<power(b1,p1);
			cout<<"\nwithout passing power as argument: ("<<b1<<")^2 = "<<power(b1);
			break;
		case 'f':
			float b2;
			int p2;
			cout<<"enter the base and power value: \n";
			cin>>b2>>p2;
			cout<<"the value of ("<<b2<<")^"<<p2<<" is "<<power(b2,p2);
			cout<<"\nwithout passing power as argument: ("<<b2<<")^2 = "<<power(b2);
			break;
		case 'd':
			double b3;
			int p3;
			cout<<"enter the base and power value: \n";
			cin>>b3>>p3;
			cout<<"the value of ("<<b3<<")^"<<p3<<" is "<<power(b3,p3);
			cout<<"\nwithout passing power as argument: ("<<b3<<")^2 = "<<power(b3);
			break;
		case 'l':
			long b4;
			int p4;
			cout<<"enter the base and power value: \n";
			cin>>b4>>p4;
			cout<<"the value of ("<<b4<<")^"<<p4<<" is "<<power(b4,p4);
			cout<<"\nwithout passing power as argument: ("<<b4<<")^2 = "<<power(b4);
			break;
		case 'c':
			char b5;
			int p5;
			cout<<"enter the character and frequency of repetition: \n";
			cin>>b5>>p5;
			power(b5,p5);
			break;
		default:
			cout<<"invalid choice!!";
	}
}
int power(int b,int p)
{
	int result=1;
	for(int i=0;i<p;i++)
	result=result*b;
	return result;
}
float power(float b,int p)
{
	float result=1;
	for(int i=0;i<p;i++)
	result=result*b;
	return result;
}
double power(double b,int p)
{
	double result=1;
	for(int i=0;i<p;i++)
	result=result*b;
	return result;
}
long long power(long b,int p)
{
	long long result=1;
	for(int i=0;i<p;i++)
	result=result*b;
	return result;
}
void power(char b,int p)
{
	cout<<"\n";
	for(int i=0;i<p;i++)
	cout<<b<<"\t";
}
