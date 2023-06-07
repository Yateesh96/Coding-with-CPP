#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	long roll_no;
	char name[25],deg[10];
	public:
	float CGPA;
	void getdetails()
	{
		cout<<"Enter student's name: ";
		cin>>name;
		cout<<"Enter Roll number: ";
		cin>>roll_no;
		cout<<"Enter Degree: ";
		cin>>deg;
		cout<<"Enter the CGPA: ";
		cin>>CGPA;
	}
	void putdetails()
	{
		cout<<endl<<"Name: "<<name;
		cout<<endl<<"Roll number: "<<roll_no;
		cout<<endl<<"Degree: "<<deg;
		cout<<endl<<"CGPA: "<<CGPA;
	}
};
main()
{
	Student S;
	int n;
	cout<<"Enter the number of students to collect details: ";
	cin>>n;
	fstream file;
	file.open("STUDENT.DAT",ios::binary|ios::in|ios::out|ios::app);
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Student-"<<i+1<<" details: \n";
		S.getdetails();
		file.write(reinterpret_cast<char*>(&S),sizeof(S));
	}
	cout<<"\nStudent details written to file!";
	fstream sfile;
	fstream afile;
	fstream bfile;
	fstream dfile;
	sfile.open("DISTINCTION.DAT",ios::binary|ios::in|ios::out|ios::app);
	afile.open("FIRSTCLASS.DAT",ios::binary|ios::in|ios::out|ios::app);
	bfile.open("SECONDCLASS.DAT",ios::binary|ios::in|ios::out|ios::app);
	dfile.open("FAIL.DAT",ios::binary|ios::in|ios::out|ios::app);
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&S),sizeof(S));
	cout<<"\n\nContent in STUDENT.DAT file:";
	
	while(file)
	{
		S.putdetails();
		if(S.CGPA>=7.5)
		sfile.write(reinterpret_cast<char*>(&S),sizeof(S));
		else if(S.CGPA>6)
		afile.write(reinterpret_cast<char*>(&S),sizeof(S));
		else if(S.CGPA>5)
		bfile.write(reinterpret_cast<char*>(&S),sizeof(S));
		else
		dfile.write(reinterpret_cast<char*>(&S),sizeof(S));
		
		file.read(reinterpret_cast<char*>(&S),sizeof(S));
	}
	cout<<"\n\nContent in DISTINCTION.DAT file:";
	sfile.seekg(0);
	sfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	while(sfile)
	{
		S.putdetails();
		sfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	}
	cout<<"\n\nContent in FIRSTCLASS.DAT file:";
	afile.seekg(0);
	afile.read(reinterpret_cast<char*>(&S),sizeof(S));
	while(sfile)
	{
		S.putdetails();
		afile.read(reinterpret_cast<char*>(&S),sizeof(S));
	}
	cout<<"\n\nContent in SECONDCLASS.DAT file:";
	bfile.seekg(0);
	bfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	while(sfile)
	{
		S.putdetails();
		bfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	}
	cout<<"\n\nContent in FAIL.DAT file:";
	dfile.seekg(0);
	dfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	while(sfile)
	{
		S.putdetails();
		dfile.read(reinterpret_cast<char*>(&S),sizeof(S));
	}
}
