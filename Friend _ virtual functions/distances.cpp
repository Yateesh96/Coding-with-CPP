//Adding distances using friend function
#include<iostream>
using namespace std;
class DB;
class DM
{
	int m;
	float cm;
	public:
	DM()
	{
		cout<<"Enter distance value in mtr and cm:\n";
		cin>>m>>cm;
	}
	friend void add(DM,DB);
};
class DB
{
	int f;
	float i;
	public:
	DB()
	{
		cout<<"Enter distance value in feet and inch:\n";
		cin>>f>>i;
	}
	friend void add(DM,DB);
};
void add(DM d1,DB d2)
{
	char c;
	cout<<"\nEnter option for output:\n(mtr & cm ->m ;ft & inch ->f)\n";
	cin>>c;
	switch(c)
	{
		case 'm':
			int m1;
			float c1,t;
			t=(d2.f/3.281)+(d2.i/39.37);
			m1=t+d1.m;
			c1=(t-int(t))*100+d1.cm;
			if(c1>=100)
			{
				m1=m1+1;
				c1=c1-100;
			}
			cout<<"\nTotal distance in mtr and cm:\n";
			cout<<m1<<" meters "<<c1<<" centimeters";
			break;
		case 'f':
			int f1;
			float i1,k;
			k=(d1.m*3.281)+(d1.cm/30.48);
			f1=k+d2.f;
			i1=(k-int(k))*12+d2.i;
			if(i1>=12)
			{
				f1=f1+1;
				i1=i1-12;
			}
			cout<<"\nTotal distance in ft and inch:\n";
			cout<<f1<<" feet "<<i1<<" inches";
			break;
		default:
			cout<<"Invalid option!!";
	}
}
main()
{
	DM d1;
	DB d2;
	add(d1,d2);
}
