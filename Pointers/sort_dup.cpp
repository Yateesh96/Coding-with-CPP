//sorting array elements and removing duplicates using pointer
#include<iostream>
using namespace std;
int sort_dup(int* y,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(*(y+j)>*(y+j+1))
			{
				int t;
				t=*(y+j);
				*(y+j)=*(y+j+1);
				*(y+j+1)=t;
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(*(y+i)==*(y+i+1))
		{
			for(int j=i+1;j<n;j++)
			{
				*(y+j)=*(y+j+1);
			}
			n--;
			i--;
		}
	}
	return n;
}
main()
{
	int a[20],n,k;
	cout<<"enter number of elements: ";
	cin>>n;
	cout<<"enter array elements: \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	k=sort_dup(a,n);
	cout<<"\nThe sorted array elements after removing duplicates are as follows: \n";
	for(int i=0;i<k;i++)
	cout<<a[i]<<"\t";
}
