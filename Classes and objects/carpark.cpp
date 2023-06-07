//Program to find the parking charges using class
#include<iostream>
using namespace std;
class carpark
{
	int car_id,cph;
	float time,charges;
	public:
		void setdata(int n,float t)
		{
			car_id=n;
			time=t;
			cph=20;					/* charge per hour be Rs.20 */
			charges=time*cph;
		}
		void showdata()
		{
			cout<<"\nThe car Id is: "<<car_id;
			cout<<"\nNumber of parking hours: "<<time;
			cout<<"\nTotal charges: Rs."<<charges<<"/-";
		}
};
int main()
{
	carpark c1;
	int n;
	float t;
	cout<<"enter the car ID: ";
	cin>>n;
	cout<<"enter the number of parking hours: ";
	cin>>t;
	c1.setdata(n,t);
	c1.showdata();
}
