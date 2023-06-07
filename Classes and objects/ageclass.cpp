#include<iostream>
using namespace std;
class age
{
	int dd,mm,yyyy;
	public:
	age()
	{
		dd=26;
		mm=4;
		yyyy=2021;
	}
	get()
	{
		cout<<"enter your date of birth in the format dd mm yyyy:\n";
		cout<<"caution: your date of birth shall not proceed the present day!!\n";
		cin>>dd>>mm>>yyyy;
	}
	void calcn(age d,age da)
	{
		yyyy=d.yyyy-da.yyyy;
		mm=d.mm-da.mm;
		dd=d.dd-da.dd;
		if(da.mm>d.mm)	/*when your birthday has not came yet this year*/
		{
			yyyy--;
			mm=12+mm;
		}
		if(da.dd>d.dd)
		{
			mm--;
			dd=31+dd;
		}
		cout<<"\n\nYou are "<<yyyy<<" years "<<mm<<" months "<<dd<<" days old";
	}
};
main()
{
	age d,da,re;
	//d is for the present day;
	//da for actual DOB;
	//re is for the total age;
	da.get();
	re.calcn(d,da);
}
