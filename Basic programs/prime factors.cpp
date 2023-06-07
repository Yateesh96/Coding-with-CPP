//C++ program to generate prime factors
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,j,count=0;
	cout<<"enter a number: ";
	cin>>n;
	cout<<"the prime factors are: "<<endl;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count=0;
			for(j=1;j<=n;j++)
			{
				if(i%j==0)
				count++;
			}
			if(count==2)
			cout<<i<<"\t";
			/*Number to be a prime,should have 1 and itself as factors*/
		}
	}
}
