#include<iostream>
using namespace std;
class Bank_Account
{
	protected:
	long Acc;
	string name;
	float bal;
	public:
	void getDetails()
	{
		cout<<"input Account number: ";
		cin>>Acc;
		cout<<"Enter Account holder name: ";
		cin>>name;
		cout<<"enter the available amount in the account: ";
		cin>>bal;
	}
	void displayDetails()
	{
		cout<<"\nAccount credentials:"<<Acc<<"\nName: "<<name;
		cout<<"\nBalance amount: "<<bal;
	}
	
};
class Savings_Account:public Bank_Account
{
	public:
	void cal_interest()
	{
		bal=bal-(0.02*bal);
		cout<<"\n\nthis is savings account\nbalance available: "<<bal;
	}
	void withdraw(int r)
	{
		int p,pin=6996;
		cout<<"enter the pin to proceed: ";
		cin>>p;
		if(p==pin)
		{
			bal=bal-r;
			cout<<"transaction successful\n";
		}
		else
		cout<<"pin is incorrect!!";
	}
	void deposit(int r)
	{
		bal=bal+r;
		cout<<"deposit successful\n";
	}
};
class Current_Account:public Bank_Account
{
	public:
	void cal_interest()
	{
		bal=bal-(0.05*bal);
		cout<<"\n\nthis is current account\nbalance available: "<<bal;
	}
	void withdraw(int r)
	{
		int p,pin=6996;
		cout<<"enter the pin to proceed: ";
		cin>>p;
		if(p==pin)
		{
			bal=bal-r;
			cout<<"transaction successful\n";
		}
		else
		cout<<"pin is incorrect!!";
	}
	void deposit(int r)
	{
		bal=bal+r;
		cout<<"deposit successful!";
	}
};
main()
{
	Savings_Account s1;
	Current_Account c1;
	int c;
	cout<<"Savings account credentials:\n";
	s1.getDetails();
	cout<<"\nCurrent account credentials:\n";
	c1.getDetails();
	s1.cal_interest();
	cout<<"\nenter amt. to withdraw: ";
	cin>>c;
	s1.withdraw(c);
	cout<<"enter amt. to deposit: ";
	cin>>c;
	s1.deposit(c);
	s1.displayDetails();
	c1.cal_interest();
	cout<<"\nenter amt. to withdraw: ";
	cin>>c;
	c1.withdraw(c);
	cout<<"enter amt. to deposit: ";
	cin>>c;
	c1.deposit(c);
	c1.displayDetails();
}
