//employee details using class
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class employee
{
	char name[15];
	long emp_no;
	public:
		void getdata(char s[],long num)
		{
			strcpy(name,s);
			emp_no=num;
		}
		void putdata()
		{
			cout<<setiosflags(ios::right);
			cout<<endl<<setw(15)<<name;
			cout<<endl<<setw(17)<<emp_no;
		}
};
int main()
{
	employee E[10];
	int n;
	cout<<"enter the number of employees: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char str[15];
		long num;
		cout<<"enter the employee-"<<i+1<<" name: ";
		cin>>str;
		cout<<"enter the employee-"<<i+1<<" ID number: ";
		cin>>num;
		E[i].getdata(str,num);
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\n\nemployee-"<<i+1<<" details: ";
		E[i].putdata();
	}
}
