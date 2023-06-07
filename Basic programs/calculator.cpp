//Four-function Calculator
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,res;
	char c;
	cout<<"Enter the first number, operator, second number: ";
	cin>>a>>c>>b;
	switch(c)
	{
		case '+':
			res=a+b;
			cout<<endl<<"ANSWER = "<<res;
			break;
		case '-':
			res=a-b;
			cout<<endl<<"ANSWER = "<<res;
			break;
		case '*':
			res=a*b;
			cout<<endl<<"ANSWER = "<<res;
			break;
		case '/':
			res=a/b;
			cout<<endl<<"ANSWER = "<<res;
			break;
		default:
			cout<<"Invalid Operator!!";
	}
}
