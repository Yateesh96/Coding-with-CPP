#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
class things
{
	int roll_no;
	char name[15];
	char dept[10];
	long ph_no;
	char area[20];
	public:
	void input()
	{
		cout<<"Enter name: ";cin>>name;
		cout<<"Enter Roll number: ";cin>>roll_no;
		cout<<"Enter Department: ";cin>>dept;
		cout<<"Enter mobile number: ";cin>>ph_no;
		cout<<"Enter Area: ";cin>>area;
	}
	void op_format()
	{
		cout<<name<<setiosflags(ios::right)<<setw(15)<<roll_no<<"\n";
	}
	void search_roll(int temp_no)
	{
		ifstream infile;
		infile.open("fileb.data",ios::binary);
		bool k=0;
		while(infile)
		{
			infile.read(reinterpret_cast<char*>(this),sizeof(*this));
			if(roll_no==temp_no)
			{
				cout<<"\nMatch found\n";
				k=true;
				cout<<name;
				cout<<endl<<"Roll number: "<<roll_no;
				cout<<"\nDepartment: "<<dept;
				cout<<"\nMobile number: "<<ph_no;
				cout<<"\nArea of residence: "<<area;
				break;
			}
		}
		if(k==0)
		cout<<"\nNo matches found";
	}
	void search_ph(long tel_no)
	{
		ifstream infile;
		infile.open("fileb.data",ios::binary);
		bool x=0;
		while(infile)
		{
			infile.read(reinterpret_cast<char*>(this),sizeof(*this));
			if(ph_no==tel_no)
			{
				cout<<"\nMatch found\n";
				x=true;
				cout<<name;
				cout<<"\nMobile number: "<<ph_no;
				break;
			}
		}
		if(x==0)
		cout<<"\nNo matches found";
	}
	void update_dept(int r)
	{
		ifstream tfile;
		tfile.open("fileb.data",ios::binary);
		char temp[10];
		bool x=0;
		while(tfile)
		{
			tfile.read(reinterpret_cast<char*>(this),sizeof(*this));
			if(roll_no==r)
			{
				x=true;
				cout<<"\nCurrent department: "<<dept;
				cout<<"\nEnter the department to update with: ";
				cin>>temp;
				strcpy(dept,temp);
				cout<<"Updation successful!\nNew data of student:\n";
				cout<<name;
				cout<<"\nDepartment: "<<dept;
				break;
			}
		}
		if(x==0)
		cout<<"Incorrect Roll number!\n";
	}
};
main()
{
	int i=1;
	char ch;
	things t1;
	fstream file;
	file.open("fileb.data",ios::app|ios::out|ios::in|ios::binary);
	do
	{
		cout<<"Enter person-"<<i++<<"'s data:\n";
		t1.input();
		file.write(reinterpret_cast<char*>(&t1),sizeof(t1));
		cout<<"\nWanna add more?\n(Y->yes\tN->no)\n";
		cin>>ch;
	}while(ch=='Y');
	file.seekg(0);
	cout<<"\nData from the file:\n";
	file.read(reinterpret_cast<char*>(&t1),sizeof(t1));
	while(file)
	{
		t1.op_format();
		file.read(reinterpret_cast<char*>(&t1),sizeof(t1));
	}
	cout<<"Enter choice:";
	cout<<"\n(s-search by roll number\tt-search by mobile\tu-update dept.)\n";
	cin>>ch;
	switch(ch)
	{
		case 's':
			int temp_no;
			cout<<"Enter Roll number to search: ";
			cin>>temp_no;
			t1.search_roll(temp_no);
			break;
		case 't':
			long tel_no;
			cout<<"Enter telephone number to search: ";
			cin>>tel_no;
			t1.search_ph(tel_no);
			break;
		case 'u':
			int r;
			cout<<"Enter roll number of student to update department: ";
			cin>>r;
			t1.update_dept(r);
			break;
		default:
			cout<<"Invalid choice!";
	}
}
