#include<iostream>
using namespace std;
//note: distance is a built-in keyword and so is time; replace the first letter by D and T rtively
float tfeet=0;
float tinch=0;
class Distance
{
	int feets,inches;
	public:
		void getdata(int f,int i)
		{
			feets=f;
			inches=i;
			tfeet=tfeet+feets;
			tinch=tinch+inches;
		}
		void avgdata(int n)
		{
			tfeet=tfeet/n;
			tinch=tinch/n;
			cout<<"the average value of feets is: "<<tfeet<<"'";
			cout<<"\nthe average value of inches is: "<<tinch<<"''";
		}
};
int main()
{
	Distance d;
	int n;
	cout<<"enter the number of distances: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int feet=0,inch=0;
		cout<<"enter the feet value for distance-"<<i+1<<" : ";
		cin>>feet;
		cout<<"enter the inch value for distance-"<<i+1<<" : ";
		cin>>inch;
		d.getdata(feet,inch);
	}
	d.avgdata(n);
}
