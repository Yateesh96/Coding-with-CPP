#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	int roll;
	char name[15];
	char deg[15];
	public:
	float cgpa;
	void get_dets()
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter roll number: ";
		cin>>roll;
		cout<<"Enter degree: ";
		cin.ignore(1);
		cin.get(deg,15);
		cout<<"Enter CGPA: ";
		cin>>cgpa;
	}
	void disp_dets()
	{
		cout<<"Name: "<<name;
		cout<<"\nRoll number: "<<roll;
		cout<<"\nDegree: "<<deg;
		cout<<"\nCGPA: "<<cgpa;
	}
};
main()
{
	Student s;
	int n;
	cout<<"Enter number of students to take input of: ";
	cin>>n;
	fstream studs;
	studs.open("STUDENT.DAT",ios::in|ios::out|ios::app);
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter student-"<<i+1<<" details: \n";
		s.get_dets();
		studs.write(reinterpret_cast<char*>(&s),sizeof(s));
	}
	cout<<"\n\nInput added!";
	studs.seekg(0);
	fstream buds;
	buds.open("MODERATE.DAT",ios::in|ios::out|ios::app);
	fstream kids;
	kids.open("GOOD.DAT",ios::in|ios::out|ios::app);
	for(int i=0;i<n;i++)
	{
		studs.read(reinterpret_cast<char*>(&s),sizeof(s));
		if(s.cgpa<5)
		buds.write(reinterpret_cast<char*>(&s),sizeof(s));
		else
		kids.write(reinterpret_cast<char*>(&s),sizeof(s));
	}
}
