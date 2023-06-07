#include<iostream>
using namespace std;
void split(int* a,int n,int* pri,int* com)
{
	int np,nc,t,f;
	np=nc=0;
	for(int i=0;i<n;i++)
	{
		t=1,f=0;
		while(t<=*(a+i))
		{
			if(*(a+i)%t==0)
			f++;
			t++;
		}
		if(f==1||f==2)
		{
			*(pri+np)=*(a+i);
			np++;
		}
		else
		{
			*(com+nc)=*(a+i);
			nc++;
		}
	}
	cout<<"\nArray with prime numbers:\n";
	for(int j=0;j<np;j++)
	cout<<*(pri+j)<<"\t";
	cout<<"\nArray with composite numbers:\n";
	for(int j=0;j<nc;j++)
	cout<<*(com+j)<<"\t";
}
main()
{
	int a[25],pri[15],com[15],n;
	cout<<"enter number of elements required in the array: ";
	cin>>n;
	cout<<"enter the array elements:\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	split(a,n,pri,com);
}
