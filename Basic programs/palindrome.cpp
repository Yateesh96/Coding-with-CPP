#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,t,rev=0,rem;
	cout<<"enter a number: ";
	cin>>n;
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==t)
	cout<<"the number "<<t<<" is a palindrome";
	else
	cout<<"the number "<<t<<" is not a palindrome";
}
