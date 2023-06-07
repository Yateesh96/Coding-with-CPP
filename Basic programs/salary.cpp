#include<iostream>
#define HRA 0.1
#define TA 0.05
using namespace std;
int main()
{
	float basic,sal;
	cout<<"enter the basic pay: ";
	cin>>basic;
	sal=(HRA+TA)*basic+basic;
	cout<<"the net salsry is: "<<sal;
}
