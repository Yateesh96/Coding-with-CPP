//swapping without temp
#include<iostream>
using namespace std;
int main()
{
	int A,B;
	cout<<"Enter the values of A and B\n";
	cin>>A>>B;
	cout<<"The values of A and B before swapping:\n"<<A<<"\t"<<B;
	A=A+B;
	B=A-B;
	A=A-B;
	cout<<"\nThe values of A and B after swapping:\n"<<A<<"\t"<<B;
}
