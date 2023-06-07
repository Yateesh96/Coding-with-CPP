//negative to positive
#include<iostream>
using namespace std;
inline int negtopos(int n)
{
	return(n*(-1));
}
int main()
{
	int num;
	cout<<"enter the number: ";
	cin>>num;
	cout<<"\n";
	if(num<0)
	cout<<negtopos(num);
	else
	cout<<num;
}
