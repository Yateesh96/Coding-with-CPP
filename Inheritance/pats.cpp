//C++ program for hospital management
#include<iostream>
using namespace std;
class Patient
{
	string sex;
	int age,ward_no;
	string nat_illness;
	public:
	string name;
	Patient()
	{
		name='\0';
		sex='\0';
		age=0;
		ward_no=0;
		nat_illness='\0';
	}
	Patient(string s,string x,int a,int w,string ill)
	{
		name=s;
		sex=x;
		age=a;
		ward_no=w;
		nat_illness=ill;
	}
	void show()
	{
		cout<<"\nName: "<<name;
		cout<<"\nSex: "<<sex;
		cout<<"\nAge: "<<age;
		cout<<"\nWard number: "<<ward_no;
		cout<<"\nNature of illness: "<<nat_illness;
	}
};
class PatientList
{
	Patient p[10];
	static int n;
	public:
	void Insert(Patient k,int x)
	{
		p[x]=k;
		n++;
	}
	void Search(string s)
	{
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(p[i].name==s)
			{
				cout<<"Patient found!\n";
				p[i].show();
				break;
			}
			
			count++;
		}
		if(count==n)
		cout<<"\nNo patient found!";
	}
	void view()
	{
		for(int i=0;i<n;i++)
		{
			cout<<"\n\nPatient-"<<i+1<<" :\n";
			p[i].show();
		}
	}
};
int PatientList::n=0;
main()
{
	Patient k;
	PatientList d;
	string s,x,ill;
	int count=0;
	char choice;
	int a,w;
	l:
	cout<<"Enter name: ";
	cin>>s;
	cout<<"Enter sex: ";
	cin>>x;
	cout<<"Enter age: ";
	cin>>a;
	cout<<"Enter nature of illness: ";
	cin>>ill;
	cout<<"Enter ward number: ";
	cin>>w;
	k=Patient(s,x,a,w,ill);
	d.Insert(k,count++);
	cout<<"Do you want to add more patients:(Y/N)\n";
	cin>>choice;
	if(choice=='Y')
	goto l;
	cout<<"Enter the name to search: ";
	cin>>s;
	d.Search(s);
	cout<<"\nDetails of all the Patients: \n";
	d.view();
}
