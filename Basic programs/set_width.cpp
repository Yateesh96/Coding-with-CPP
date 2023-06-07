//C++ program on set_width
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setiosflags(ios::left);
	cout<<setw(15)<<"last_name"<<setw(15)<<"first_name"<<setw(15)<<"city"<<setw(15)<<"state\n"<<endl;
	for(int i=0;i<60;i++)
	cout<<"*";
	cout<<endl;
	cout<<endl<<setw(15)<<"Ram"<<setw(15)<<"Saran"<<setw(15)<<"Chennai"<<setw(15)<<"Tamilnadu";
	cout<<endl<<setw(15)<<"Barath"<<setw(15)<<"Sekar"<<setw(15)<<"Thanjavur"<<setw(15)<<"Tamilnadu";
}
