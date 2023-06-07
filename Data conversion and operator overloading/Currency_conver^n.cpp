//Demonitization
#include<iostream>
using namespace std;
class pounds_old
{
	int po,sh,pe;
	public:
	pounds_old()
	{
		po=0;sh=0;pe=0;
	}
	pounds_old(int p1,int p2,int p3)
	{
		po=p1;sh=p2;pe=p3;
	}
	void out()
	{
		cout<<"\x9c "<<po<<"."<<sh<<"."<<pe;
	}
	operator float()
	{
		float temp=((po*20*12)+(sh*12)+float(pe))/240;
		return temp;
	}
};
main()
{
	int p,q,r;
	cout<<"Enter the Currency in POUNDS SHILLINGS PENCE system:\n";
	cin>>p>>q>>r;
	pounds_old C1(p,q,r);
	float C1_new;
	C1_new=C1;
	cout<<"Currency in old system: ";
	C1.out();
	cout<<"\nCurrency in modern system: \x9c "<<C1_new;
}
