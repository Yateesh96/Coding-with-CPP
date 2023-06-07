//Areas of different figures
#include<iostream>
#include<math.h>
using namespace std;
void area(int x)
{
	int a=x*x;
	cout<<"Area of this square is: "<<a;
}
void area(int x1,int x2)
{
	int a=x1*x2;
	cout<<"Area of this rectangle is: "<<a;
}
void area(float x)
{
	float a=3.14*x*x;
	cout<<"Area of this circle is: "<<a;
}
void area(int p,int q,int r)
{
	float s,a;
	s=(p+q+r)/2.0;
	a=sqrt(s*(s-p)*(s-q)*(s-r));
	cout<<"Area of this triangle is: "<<a;
}
main()
{
	char c;
	cout<<"Enter the choice";
	cout<<"\ns--square\tr--rectangle\tc--circle\tt--triangle\n";
	cin>>c;
	switch(c)
	{
		case 's':
			int s;
			cout<<"Enter the side value of square: ";
			cin>>s;
			area(s);
			break;
		case 'r':
			int l,w;
			cout<<"Enter the length and breadth of Rectangle: ";
			cin>>l>>w;
			area(l,w);
			break;
		case 'c':
			float r;
			cout<<"Enter the radius of circle: ";
			cin>>r;
			area(r);
			break;
		case 't':
			int a,b,c;
			cout<<"Enter the three sides of triangle: ";
			cin>>a>>b>>c;
			area(a,b,c);
			break;
		default:
			cout<<"invalid input!!";
	}
}
