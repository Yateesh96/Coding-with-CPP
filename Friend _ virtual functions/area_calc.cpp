//Area calculation using virtual function
#include<iostream>
using namespace std;
class SHAPE
{
	double n,l;
	public:
	void getdata()
	{
		cout<<"Enter number of sides: ";cin>>n;
		cout<<"Enter length of side: ";cin>>l;
	}
	virtual void disp_area()
	{}
};
class TRIANGLE:public SHAPE
{
	float b,h;
	public:
	void disp_area()
	{
		float area;
		cout<<"Enter base length: ";cin>>b;
		cout<<"Enter height: ";cin>>h;
		area=0.5*b*h;
		cout<<"\nArea of Triangle: "<<area<<" sq.units";
	}
};
class RECTANGLE:public SHAPE
{
	float l,w;
	public:
	void disp_area()
	{
		float area;
		cout<<"Enter length: ";cin>>l;
		cout<<"Enter width: ";cin>>w;
		area=l*w;
		cout<<"\nArea of Rectangle: "<<area<<" sq.units";
	}
};
main()
{
	TRIANGLE T;
	RECTANGLE R;
	SHAPE* S;
	char choice;
	l:
	cout<<"\nChoose the shape:\n(t-Triangle\tr-Rectangle)\n";
	cin>>choice;
	if(choice=='t')
	{
		S=&T;
		S->disp_area();
	}
	else if(choice=='r')
	{
		S=&R;
		S->disp_area();
	}
	else
	{
		cout<<"Invalid choice!";
		goto l;
	}
}
