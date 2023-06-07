//Program on adding times
#include<iostream>
using namespace std;
class Time
{
	int hours,minutes,seconds;
	public:
	Time()
	{
		hours=minutes=seconds=0;
	}
	Time(int h,int m,int s)
	{
		hours=h;
		minutes=m;
		seconds=s;
	}
	void add(int h,int m,int s)
	{
		hours=hours+h;
		minutes=minutes+m;
		seconds=seconds+s;
		if(seconds>=60)
		{
			minutes=minutes+1;
			seconds=seconds-60;
		}
		if(minutes>=60)
		{
			hours=hours+1;
			minutes=minutes-60;
		}
		cout<<"the total time is: "<<hours<<" : "<<minutes<<" : "<<seconds;
	}
};
main()
{
	int h,m,s;
	cout<<"enter the time in HH MM SS format: ";
	cin>>h>>m>>s;
	Time t(h,m,s);
	cout<<"enter the new time value to be added: ";
	cin>>h>>m>>s;
	t.add(h,m,s);
}
