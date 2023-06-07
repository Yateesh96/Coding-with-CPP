//Polar to rectangular & vice-versa
#include<iostream>
#include<math.h>
using namespace std;
class rectangular
{
	public:
	float r,i;
	rectangular()
	{
		r=0;i=0;
	}
	rectangular(float mg,float ag)
	{
		r=mg*cos(ag/57.296);
		i=mg*sin(ag/57.296);
	}
	rectangular operator +(rectangular O2)
	{
		rectangular temp;
		temp.r=r+O2.r;
		temp.i=i+O2.i;
		return temp;
	}
};
class Polar
{
	public:
	float mag,ang;
	Polar()
	{
		mag=0;ang=0;
	}
	Polar(float m,float a)
	{
		mag=m;ang=a;
	}
	void out()
	{
		cout<<mag<<" < "<<ang;
	}
	Polar operator +(Polar O2)
	{
		rectangular temp=rectangular(mag,ang)+rectangular(O2.mag,O2.ang);
		Polar T;
		T.mag=sqrt(pow(temp.r,2)+pow(temp.i,2));
		T.ang=57.296*atan(temp.i/temp.r);
		return T;
	}
};
main()
{
	Polar C1,C2,res;
	float m,a;
	cout<<"Enter the magnitude and angle for the first point:\n";
	cin>>m>>a;
	C1=Polar(m,a);
	cout<<"Enter the magnitude and angle for the second point:\n";
	cin>>m>>a;
	C2=Polar(m,a);
	res=C1+C2;
	cout<<"Co-ordinates of the resultant point: ";
	res.out();
}
