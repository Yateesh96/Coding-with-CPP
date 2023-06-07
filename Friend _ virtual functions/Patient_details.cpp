#include<iostream>
using namespace std;
class patient
{
	static int pat_no;
	char name[20];
	char nat_ill;
	char disease[25];
	char doc[20];
	static int ward_no;
	char blood_gr[10];
	public:
	void admission()
	{
		cout<<"Enter patient's name: ";
		cin.ignore(1);
		cin.get(name,20);
		cout<<"Enter nature illness:\n(A-acute\tC-chronic) : ";
		cin>>nat_ill;
		cout<<"Enter the name of disease: ";
		cin>>disease;
		cout<<"Enter the blood group of patient: ";
		cin.ignore(1);
		cin.get(blood_gr,10);
		cout<<"Enter the attending doctor's name: ";
		cin.ignore(1);
		cin.get(doc,20);
		pat_no++;
		ward_no++;
	}
	void discharge(int i)
	{
		cout<<"\nPatient-"<<i<<" discharged!";
	}
	void edit()
	{
		cout<<"Enter the name of doctor you want to replace: ";
		cin.ignore(1);
		cin.get(doc,20);
	}
	friend void search(patient[],int,int,int);
};
int patient::pat_no=0;
int patient::ward_no=0;
void search(patient p[],int x,int y,int n)
{
	if((x<=n)&&x==y)
	{
		cout<<"\nPatient found!";
		cout<<"\nName: "<<p[x].name;
		cout<<"\nIllness type: "<<p[x].nat_ill;
		cout<<"\nDisease: "<<p[x].disease;
		cout<<"\nBlood Group: "<<p[x].blood_gr;
		cout<<"\nTreated by Dr."<<p[x].doc;
	}
	else
	cout<<"\nInvalid input!\nNo matches found!";
}
main()
{
	patient p[10];
	int n,x,y;
	char ch;
	cout<<"Enter the number of patients to admit: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Input patient-"<<i+1<<" details:\n";
		p[i].admission();
	}
	l:
	cout<<"\nDo you want to discharge or edit patient?";
	cout<<"\n(D-discharge\tE-edit\tN-no) : ";
	cin>>ch;
	switch(ch)
	{
		case 'D':
			int k;
			cout<<"Enter the patient number to discharge: ";
			cin>>k;
			p[k].discharge(k);
			goto l;
			break;
		case 'E':
			int j;
			cout<<"Enter the patient number to modify the doctor: ";
			cin>>j;
			p[j].edit();
			goto l;
			break;
		case 'N':
			break;
	}
	cout<<"\nSearch engine initiated:";
	cout<<"\nEnter the patient number and ward number to search:\n";
	cin>>x>>y;
	search(p,x,y,n);
}
