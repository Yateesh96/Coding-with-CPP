//Data conversion:::long-->user....Parameter__Time
#include<iostream>
using namespace std;
class Time
{
	int hours,minutes,seconds;
	public:
		Time()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		Time(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		Time(long secs)
		{
			hours=secs/3600;
			minutes=(secs%3600)/60;
			seconds=(secs%3600)%60;
		}
		void output()
		{
			cout<<"Time in HH:MM:ss format: ";
			cout<<endl<<hours<<" : "<<minutes<<" : "<<seconds;
		}
};
main()
{
	long sec;
	cout<<"input the total elapsed seconds: ";
	cin>>sec;
	Time T(sec);
	T.output();
}
