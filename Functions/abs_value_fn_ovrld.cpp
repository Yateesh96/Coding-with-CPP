//Absolute value of a number
#include<iostream>
using namespace std;
void absolute(int);
void absolute(float);
void absolute(double);
void absolute(long);
main()
{
	int i;
	float f;
	double d;
	long l;
	char c;
	cout<<"Enter the choice\ni--integer\tf--float\td--double\tl--long\n";
	cin>>c;
	switch(c)
	{
		case 'i':
			cout<<"input an integer: ";
			cin>>i;
			absolute(i);
			break;
		case 'f':
			cout<<"input a float value: ";
			cin>>f;
			absolute(f);
			break;
		case 'd':
			cout<<"input a double value: ";
			cin>>d;
			absolute(d);
			break;
		case 'l':
			cout<<"input a long integer value: ";
			cin>>l;
			absolute(l);
			break;
		default:
			cout<<"invalid input!!";
	}
}
void absolute(int a)
{
	if(a<0)
	a=a*(-1);
	cout<<"the absolute value of this integer is: "<<a;
}
void absolute(float a)
{
	if(a<0)
	a=a*(-1);
	cout<<"the absolute value of this float value is: "<<a;
}
void absolute(double a)
{
	if(a<0)
	a=a*(-1);
	cout<<"the absolute value of this double value is: "<<a;
}
void absolute(long a)
{
	if(a<0)
	a=a*(-1);
	cout<<"the absolute value of this long int value is: "<<a;
}
