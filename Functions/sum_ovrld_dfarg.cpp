//addition of 4 numbers using fn overloading and default args
#include<iostream>
using namespace std;
void sum(int=1,int=2,int=3,int=4);
void sum(float=1,float=2,float=3,float=4);
void sum(double=1,double=2,double=3,double=4);
main()
{
	char c;
	cout<<"enter the argument type:\n";
	cout<<"i-int\tf-float\td-double\n";
	cin>>c;
	switch(c)
	{
		case 'i':
			int p,q,r,s;
			cout<<"enter the 4 values to be added:\n";
			cin>>p>>q>>r>>s;
			sum(p,q);
			break;
		case 'f':
			float w,x,y,z;
			cout<<"enter the 4 values to be added:\n";
			cin>>w>>x>>y>>z;
			sum(w,x,y);
			break;
		case 'd':
			double a,b,c,d;
			cout<<"enter the 4 values to be added:\n";
			cin>>a>>b>>c>>d;
			sum(a,b,c,d);
			break;
		default:
			cout<<"invalid choice!!";
	}
}
void sum(int a,int b,int c,int d)
{
	int res=a+b+c+d;
	cout<<"result = "<<res;
}
void sum(float a,float b,float c,float d)
{
	float res=a+b+c+d;
	cout<<"result = "<<res;
}
void sum(double a,double b,double c,double d)
{
	double res=a+b+c+d;
	cout<<"result = "<<res;
}
