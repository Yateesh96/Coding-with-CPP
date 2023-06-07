//C++ program to get name,age and phone number as input and print it
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char name[25];
	int age;
	long long ph_no;
	cout<<"enter your name: ";
	gets(name);
	cout<<"enter your age: ";
	cin>>age;
	cout<<"enter your mobile number: ";
	cin>>ph_no;
	cout<<endl<<setw(30)<<name<<endl<<setw(25)<<"age = "<<age<<endl<<setw(25)<<"phone number: "<<ph_no;
}
