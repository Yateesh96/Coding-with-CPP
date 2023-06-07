//Time structure (add and convert)
#include<iostream>
using namespace std;
struct Time
{
	int hour,min,sec;
};
void add(Time k[],int n)
{
	Time result={0,0,0};
	for(int i=0;i<n;i++)
	{
		result.hour=result.hour+k[i].hour;
		result.min=result.min+k[i].min;
		result.sec=result.sec+k[i].sec;
	}
	if(result.sec>=60)
	{
		result.min=result.min+(result.sec/60);
		result.sec=result.sec%60;
	}
	if(result.min>=60)
	{
		result.hour=result.hour+(result.min/60);
		result.min=result.min%60;
	}
	cout<<"The total time is:\n"<<result.hour<<" hours ";
	cout<<result.min<<" minutes "<<result.sec<<" seconds";
}
void time_to_sec(Time k[],int n)
{
	int sec[n]={0};
	for(int i=0;i<n;i++)
		sec[i]=sec[i]+(k[i].hour*3600)+(k[i].min*60)+k[i].sec;
	cout<<"\n\nTime in seconds: ";
	for(int i=0;i<n;i++)
		cout<<"\nTime-"<<i+1<<" : "<<sec[i]<<" seconds";
}
main()
{
	Time t[10];
	int n;
	cout<<"Enter the number of inputs: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nenter the hours for time-"<<i+1<<": ";
		cin>>t[i].hour;
		cout<<"enter the minutes for time-"<<i+1<<": ";
		cin>>t[i].min;
		cout<<"enter the seconds for time-"<<i+1<<": ";
		cin>>t[i].sec;
		cout<<"\n";
	}
	add(t,n);
	time_to_sec(t,n);
}
