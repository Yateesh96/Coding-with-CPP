//sorting array elements using pointer
#include<iostream>
using namespace std;
void sort(int* y,int n)
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
}
main()
{
	int a[20],n;
	cout<<"enter number of elements: ";
	cin>>n;
	cout<<"enter array elements: \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,n);
	cout<<"\nThe sorted array elements are as follows: \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
