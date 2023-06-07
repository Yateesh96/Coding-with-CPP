//distance calculations using structure
#include<iostream>
using namespace std;
struct Distance
{
	int feet,inches;
};
void add(Distance x[])
{
	Distance result={0,0};
	for(int i=0;i<5;i++)
	{
		result.feet=result.feet+x[i].feet;
		result.inches=result.inches+x[i].inches;
	}
	if(result.inches>=12)
	{
		result.feet=result.feet+(result.inches/12);
		result.inches=result.inches%12;
	}
	cout<<"\n\ntotal resultant distance is "<<result.feet<<"."<<result.inches<<"'";
}
void average(Distance x[])
{
	float avg_feet=0,avg_inches=0;
	for(int i=0;i<5;i++)
	{
		avg_feet=avg_feet+x[i].feet;
		avg_inches=avg_inches+x[i].inches;
	}
	avg_feet/=5;
	avg_inches/=5;
	cout<<"\n\naverage feet value is "<<avg_feet<<"\naverage inch value is "<<avg_inches<<"'";
}
void convert(Distance x[],float c[])
{
	for(int i=0;i<5;i++)
		c[i]=(x[i].feet*30.48)+(x[i].inches*2.54);
	cout<<"\n\nconverted values of distances are:";
	for(int i=0;i<5;i++)
		cout<<"\nDistance-"<<i+1<<": "<<c[i]<<"cm";
}
main()
{
	Distance d[5];
	float cm[5]={0};
	for(int i=0;i<5;i++)
	{
		cout<<"enter the feet value of distance- "<<i+1<<": ";
		cin>>d[i].feet;
		cout<<"enter the inch value of distance- "<<i+1<<": ";
		cin>>d[i].inches;
		cout<<"\n";
	}
	add(d);
	average(d);
	convert(d,cm);
}
